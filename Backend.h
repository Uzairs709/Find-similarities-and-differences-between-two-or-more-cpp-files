#pragma once
#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

class CLL {
public:

	class node;
	node* head, * tail;
	unsigned int no_nodes;
	unsigned int similarityStartingindex;
	friend class node;
	
	CLL() {
		this->head = nullptr;
		this->tail = nullptr;
		this->no_nodes = 0;
		this->similarityStartingindex = -1;
	}

	void insert(string statement) {
		node* nn = new node(statement);
		if (head == nullptr && tail == nullptr) {
			head = nn;
			tail = nn;
			head->next = head;
			//nn->noOfLines++;
			no_nodes++;
			return;

		}
		tail->next = nn;
		tail = nn;
		tail->next = head;
		no_nodes++;
		//nn->noOfLines++;
	}

	void print() {
		node* temp = head;
		if (temp != nullptr) {
			while (temp != tail) {
				cout << temp->statement << ' ' << temp->isMatched;
				temp = temp->next;
			}
			cout << temp->statement << ' ' << temp->isMatched << endl;
		}
	}

	~CLL() {
		node* temp = head;
		while (temp != tail) {
			node* temp2 = temp;
			temp = temp->next;
			delete temp2;
		}
		delete temp;
		head = nullptr;
		tail = nullptr;
	}

	void ReadFromFile(string FileName) {
		ifstream File(FileName);
		if (File.is_open()) {
			char c;
			int i = 0;
			string statemen;
			while (File.get(c)) {
				if(c!='/')
				statemen += c;
				if (statemen[0] == 59) {
					i = 0;
					statemen += '\0';
					tail->statement += statemen;
				}
				else if (statemen[0] == 35) {
					if (c == '\n') {
						statemen += '\0';
						i = 0;
						this->insert(statemen);
						statemen.clear();
					}
				}
				else if(statemen[0]=='p') {
					if (statemen[i++] == ':') {
						statemen += '\0';
						if (statemen == "public:" || statemen == "private:" || statemen == "protected:") {
							i = 0;
							insert(statemen);
							statemen.clear();

						}
					}
				}
				else if (c == 59 || c == 123 || c == 125 || c == 41) {
					statemen += '\0';
					i = 0;
					insert(statemen);
					statemen.clear();

				}
			}

		}
		else cout << "Unable to open file" << endl;
		File.close();
	}
	bool substring(node* t1, node* t2) {
		bool flag = false;
		int index1 = 0, index2 = 0;
		if (t1->statement.size() > t2->statement.size()) {
			for (int i = t1->statement.size() - 1; i >= 0; i--) {
				if (t1->statement[i] == t2->statement[i]) {
					flag = true;
					index1++;
					index2++;
					t1->isMatched = true;
					t2->isMatched = true;
				}
			}
			index1++;
			index2++;
			index1 = t1->statement.size() - index1;
			index2 = t2->statement.size() - index2;
		}
		else {
			for (int i = t2->statement.size() - 1; i >= 0; i--) {
				if (t1->statement[i] == t2->statement[i]) {
					flag = true;
					index1++;
					index2++;
					t1->isMatched = true;
					t2->isMatched = true;
				}
			}
			index1++;
			index2++;
			index1 =t1->statement.size() - index1;
			index2 = t2->statement.size() - index2;
		}
		return flag;
	}
	void compare(CLL& obj) {
		node* temp = this->head;
		node* temp2 = obj.head;
		if (temp2 != nullptr && temp != nullptr) {
			while (temp != this->tail) {
				//cout << temp->statement << endl;
				node* initial = temp2;
				if (!temp2->isMatched) {
					if (temp->statement == temp2->statement) {
						temp->isMatched = true;
						temp2->isMatched = true;
						temp = temp->next;
						temp2 = temp2->next;
						continue;
					}
					else {
						if (substring(temp, temp2)) {
							continue;
						}
						else {
							temp2 = temp2->next;
							while (temp2 != initial) {
								if (temp->statement == temp2->statement) {
									temp->isMatched = true;
									temp2->isMatched = true;
									break;
								}
								else if (substring(temp, temp2)) {
									break;
								}
								temp2 = temp2->next;
							}
							if (temp2 == initial || temp2->isMatched)
								temp2 = temp2->next;
						}
					}
				}
				temp = temp->next;
			}

			node* initial = temp2;
			if (!temp2->isMatched) {
				if (temp->statement == temp2->statement) {
					temp->isMatched = true;
					temp2->isMatched = true;
					temp = temp->next;
					temp2 = temp2->next;
				}
				else {
					if (substring(temp, temp2)) {

					}
					else {
						temp2 = temp2->next;
						while (temp2 != initial) {
							if (temp->statement==temp2->statement) {
								temp->isMatched = true;
								temp2->isMatched = true;
								break;
							}
							else if (substring(temp, temp2)) {
								break;
							}
							temp2 = temp2->next;
						}
						if (temp2 == initial || temp2->isMatched)
							temp2 = temp2->next;
					}
				}
			}
		}
	}

	float PercentageOfSimilarity() {

		if (head != nullptr) {
			float a = 0.0;
			node* temp = head;
			while (temp != tail) {
				if (temp->isMatched)
					a++;
				temp = temp->next;
			}

			if (temp->isMatched)
				a++;
			return ((a / no_nodes) * 100.0);
		}
		return 0.0;

	}
	class node {
	public:
		std::string statement;
		bool isMatched;
		node* next;
		int index;
		friend class CLL;
		node() {
			this->statement += '\0';
			this->isMatched = false;
			this->next = nullptr;
			this->index = -1;
		}
		void strcpy_ss(char* arr1, const char* arr2) {
			for (int i = 0; i <= strlen(arr2); i++) {
				arr1[i] = arr2[i];
			}
		}
		node(std::string statement) {
			this->statement.clear();
			this->statement+= statement;
			this->isMatched = false;
			this->next = nullptr;
		}
	};
};
