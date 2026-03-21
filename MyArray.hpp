#pragma once
#include <iostream>
#include <string>

using namespace std;

template <class T>
class MyArray {
public:
	MyArray(int capacity) {
		cout << "MyArray(int capacity)" << endl;
		this->m_Capacity = capacity;
		pAddress = new T[this->m_Capacity];
		this->m_Size = 0;
	}
	MyArray(const MyArray& arr) {
		cout << "MyArray(const MyArray& arr)" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < m_Size; i++) {
			pAddress[i] = arr.pAddress[i];
		}

	}
	MyArray& operator=(const MyArray& arr) {
		cout << "MyArray& operator=(const MyArray& arr)" << endl;
		if (this->pAddress != nullptr) {
			delete[] this->pAddress;
			this->pAddress = nullptr;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[this->m_Capacity];
		for (int i = 0; i < m_Size; i++) {
			pAddress[i] = arr.pAddress[i];
		}
		return *this;
	};

	//尾插法添加元素
	void Push_Back(const T& val) {
		if (this->m_Capacity == this->m_Size) {
			return;
		}
		this->pAddress[this->m_Size] = val;
		this->m_Size++;
	}

	void Pop_back() {
		if (this->m_Size == 0) {
			return;
		}
		this->m_Size--;
	}
	//通过下标访问数据
	T& operator[] (int index) {
		return this->pAddress[index];
	}
//	void Print() {
	int getCapacity() {
		return this->m_Capacity;
	}
	int getSize() {
		return this->m_Size;
	}
	void Print() {
		for (int i = 0; i < this->m_Size; i++) {
			cout << pAddress[i] << " ";
		}
		cout << endl;
	}


	~MyArray() {
		cout << "~MyArray()" << endl;
		if (pAddress != nullptr) {
			delete[] pAddress;
			this->pAddress = nullptr;
		}
	}
private:
	T* pAddress;
	int m_Capacity;
	int m_Size;
	MyArray() {


	}
};


