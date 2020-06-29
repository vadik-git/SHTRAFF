#pragma once
#include<list>
#include<iostream>
#include<string>

using namespace std;
class Fine
{
private:
	string name;
	string date;
	float sum;
public:
	void setName(const string& name);
	const string& GetName();
	void setDate(const string& date);
	const string& GetDate();
	void setSum(float& sum);
	float GetSum();
	Fine(const string name, const string data, float sum) {
		setName(name);
		setDate(data);
		setSum(sum);
	}
	void print() {
		cout << "Name >>" << name << endl;
		cout << "Date >>" << date << endl;
		cout << "Sum >>" << sum << endl;
	}

};
class CarNode {
public:
	CarNode() = default;
	bool isEmpty()const;
	void AddNode(int numb, Fine* fine);
	void print()const;
	void printNumber(int number);
	void deleteNumber(int number);
private:
	struct Node {
		int number;
		list<Fine*>fines;
		void show() {
			for (auto el : fines) {
				el->print();
			}
		}
		Node* right;
		Node* left;
		Node* parent;

	};
	Node* node = nullptr;
	void Prints(Node* node)const;
	auto finNode(Node* node, int tmp);
};



