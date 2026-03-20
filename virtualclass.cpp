//#include <iostream>
//using namespace std;
//
//
//class CPU
//{
//public:
//	virtual void calculate() = 0;
//};
//
//class VideoCard
//{
//public:
//	virtual void display() = 0;
//};
//
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//
//class Computer 
//
//{
//public:
//	Computer(CPU *cpu, VideoCard *vc, Memory *mem)  {
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//	void work() {
//		m_cpu->calculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//private:
//	CPU *m_cpu;
//	VideoCard *m_vc;
//	Memory *m_mem;
//
//~Computer() {
//	if (m_cpu != NULL)
//	delete m_cpu;
//	if (m_vc != NULL)
//	delete m_vc;
//	if (m_mem != NULL)
//	delete m_mem;
//}	
//};
//
//class IntelCPU : public CPU
//{
//public:
//	void calculate() {
//		cout << "Intel CPU" << endl;
//	}
//};
//
//class AMDCPU : public CPU
//{
//public:
//	void calculate() {
//		cout << "AMD CPU" << endl;
//	}
//};
//
//
//class NvidiaVideoCard : public VideoCard
//{
//public:
//	void display() {
//		cout << "Nvidia VideoCard" << endl;
//	}
//};
//
//class AMDVideoCard : public VideoCard
//{
//public:
//	void display() {
//		cout << "AMD VideoCard" << endl;
//	}
//};
//
//class KingstonMemory : public Memory
//{
//public:
//	void storage() {
//		cout << "Kingston Memory" << endl;
//	}
//};
//
//class SamsungMemory : public Memory
//{
//public:
//	void storage() {
//		cout << "Samsung Memory" << endl;
//	}
//};
//
//void test01() {
//	CPU *cpu = new IntelCPU();
//	VideoCard *vc = new NvidiaVideoCard();
//	Memory *mem = new KingstonMemory();
//	Computer *com = new Computer(cpu, vc, mem);
//	com->work();
//}
//
//int main() {
//	test01();
//
//	return 0;
//}











//
//class AbastractDrinking {
//public:
//	virtual void Boil() = 0;
//
//	virtual void Brew() = 0;
//
//	virtual void PourInCup() = 0;
//
//	virtual void PutSomething() = 0;
//
//	void makeDrinking() {
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class Sugger : public AbastractDrinking {
//public:
//	virtual void Boil() {
//		cout << "Boil" << endl;
//	}
//
//	virtual void Brew() {
//		cout << "Brew" << endl;
//	}
//	virtual void PourInCup() {
//		cout << "PourInCup" << endl;
//	}
//	virtual void PutSomething() {
//		cout << "PutSomething" << endl;
//	}
//};
//
//
//class Honey : public AbastractDrinking {
//public:
//	virtual void Boil() {
//		cout << "Boil honey" << endl;
//	}
//	virtual void Brew() {
//		cout << "Brew honey" << endl;
//	}
//	virtual void PourInCup() {
//		cout << "PourInCup honey" << endl;
//	}
//	virtual void PutSomething() {
//		cout << "PutSomething honey" << endl;
//	}
//};
//
//void doWork(AbastractDrinking* abs) {
//	abs->makeDrinking();
//	delete abs;
//}
//void test01() {
//
//	doWork(new Sugger);
//	doWork(new Honey);
//}
//
//int main() {
//	cout << "Hello, World!" << endl;
//	test01();
//
//}