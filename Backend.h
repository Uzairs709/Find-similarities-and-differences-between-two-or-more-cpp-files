#pragma once
#include<iostream>
#include<string.h>
#include<fstream>
#include<vector>
using namespace std;
class CLL {
public:

	class node;
	node* head, * tail;
	unsigned int no_nodes;
	unsigned int similarityStartingindex;
	vector<string> table;
	vector<string> table2;
	friend class node;

	CLL() {
		this->head = nullptr;
		this->tail = nullptr;
		this->no_nodes = 0;
		this->similarityStartingindex = -1;
		table.push_back("int");
		table.push_back("float");
		table.push_back("double");
		table.push_back("char");
		table.push_back("string");
		table.push_back("bool");
	}

	void insert(string statement) {
		node* nn = new node(statement);
		if (head == nullptr && tail == nullptr) {
			head = nn;
			tail = nn;
			head->next = head;
			no_nodes++;
			return;
		}
		tail->next = nn;
		tail = nn;
		tail->next = head;
		no_nodes++;
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
				if (c != '/' && c != '\t' && c != '\n')
					statemen += c;
				if (statemen[0] == 59) {
					i = 0;
					statemen += "\0";
					tail->statement += statemen;
					statemen.clear();
				}
				else if (statemen[0] == 35) {
					if (c == '\n') {
						statemen += "\0";
						i = 0;
						this->insert(statemen);
						statemen.clear();
					}
				}
				else if (statemen[0] == 'p') {
					if (statemen[i++] == ':') {
						statemen += "\0";
						if (statemen == "public:" || statemen == "private:" || statemen == "protected:") {
							i = 0;
							insert(statemen);
							statemen.clear();

						}
					}
				}
				else if (c == 59 || c == 123 || c == 125 || c == 41) {
					statemen += "\0";
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
			index1 = t1->statement.size() - index1;
			index2 = t2->statement.size() - index2;
		}
		return flag;
	}
	void dataType(node* t1, node* t2) {
		string obj = "";
		if (t1->statement[0] == 'c' && t1->statement[1] == 'l' && t1->statement[2] == 'a' && t1->statement[3] == 's' && t1->statement[4] == 's') {
			for (int i = 6; t1->statement[i] != '{'; i++) {
				obj += t1->statement[i];
			}
			table.push_back(obj);
		}
	}
	bool variables(node* t1, node* t2) {
		string data_type = "", data_type2 = "";
		bool flag = false;
		for (int i = 0; t1->statement[i] != '\0' && t1->statement[i] != ' '; i++) {
			data_type += t1->statement[i];
		}
		for (int i = 0; t1->statement[i] != '\0' && t2->statement[i] != ' '; i++) {
			data_type2 += t2->statement[i];
		}
		for (int i = 0; i < table.size(); i++) {
			if (table[i] == data_type && table[i] == data_type2) {
				flag = true;
				break;
			}
		}
		if (flag) {
			string variable = "";
			for (int i = data_type.size(); t1->statement[i] != '\0'; i++) {
				if ((t1->statement[i] >= 'a' && t1->statement[i] <= 'z') || (t1->statement[i] >= 'A' && t1->statement[i] <= 'Z') || t1->statement[i] == '_') {
					variable += t1->statement[i];
				}
				else if (t1->statement[i] == ',' || t1->statement[i] == ';') {
					table2.push_back(variable);
					variable = "";
				}
			}
		}
		return flag;
	}

	void compare(CLL& obj) {
		node* temp = this->head;
		node* temp2 = obj.head;
		while (temp != this->tail) {
			//cout << temp->statement << endl;
			node* initial = temp2;
			if (!temp2->isMatched) {
				if (temp2->statement == temp->statement) {
					temp->isMatched = true;
					temp2->isMatched = true;
					temp = temp->next;
					temp2 = temp2->next;
					continue;
				}
				else {
					temp2 = temp2->next;
					while (temp2 != initial) {
						if (temp2->statement == temp->statement) {
							temp->isMatched = true;
							temp2->isMatched = true;
							break;
						}
						temp2 = temp2->next;
					}
					if (temp2 == initial || temp2->isMatched)
						temp2 = temp2->next;
				}
			}
			temp = temp->next;
		}
		node* initial = temp2;
		if (!temp2->isMatched) {
			if (temp2->statement == temp->statement) {
				temp->isMatched = true;
				temp2->isMatched = true;
				temp = temp->next;
				temp2 = temp2->next;

			}
			else {
				temp2 = temp2->next;
				while (temp2 != initial) {
					if (temp2->statement == temp->statement) {
						temp->isMatched = true;
						temp2->isMatched = true;
						break;
					}
					temp2 = temp2->next;
				}
				if (temp2 == initial || temp2->isMatched)
					temp2 = temp2->next;
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
		node(std::string statement) {
			this->statement.clear();
			this->statement = statement;
			this->isMatched = false;
			this->next = nullptr;
			this->index = -1;
		}
	};
};
