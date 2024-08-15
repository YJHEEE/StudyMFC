// Study_STL.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream>
#include <string>
#include <map>


using namespace std;

int main()
{
	cout << "This is Study_Map" << endl;


	cout << "<Map>\n"
		<< ": �� ��尡 key, value ������ �̷���� Ʈ���̴�.\n"
		<< ": �ߺ��� ������� �ʴ´�.\n"
		<< ": Map�� first, second�� �ִ� pair ��ü�� ����Ǵµ�, first-key�� second-value�� ����ȴ�.\n"
		<< ": �ڷḦ ������ �� ���ο��� �ڵ����� �����Ѵ�.\n"
		<< ": Key�� �������� �����ϸ� ������������ �����Ѵ�.\n"
		<< ": ���� ������������ �����ϰ� ���� ��� [map<int, int, greater> map1;]ó�� ����ϸ� �ȴ�.\n"
		<< ": ����Ϸ��� ����� [#include <map>]�� �ۼ������ �Ѵ�.\n"
		<< ": map�� �⺻������ [map<key type, value, type> �̸�;]�̴�.\n"
		<< ": \n"
		<< endl;

	map<string, int> m;
	m.insert({ "A", 111 });
	m.insert({ "B", 222 });
	m.insert({ "C", 333 });

	for (auto iter = m.begin(); iter != m.end(); iter++) {
		cout << "iter->first : " << iter->first << ", iter->second : " << iter->second << endl;
	}
	cout << endl;

	cout << "<m.find(" << "D" << ") ���� ��>" << endl;
	if (m.find("D") != m.end()) cout << "D ������ ����\n" << endl;
	else cout << "D ������ ����\n" << endl;

	m.erase("A");
	cout << "<Ư�� �����͸� �����ϴ� m.erase(" << "A" << ") ��>" << endl;
	for (auto iter = m.begin(); iter != m.end(); iter++) {
		cout << "iter->first : " << iter->first << ", iter->second : " << iter->second << endl;
	}
	cout << endl;

	m.clear();
	cout << "<��� �����͸� �����ϴ� m.clear() ��>" << endl;
	if (m.find("B") != m.end()) cout << "B ������ ����" << endl;
	else cout << "B ������ ����" << endl;

	if (m.find("C") != m.end()) cout << "C ������ ����" << endl;
	else cout << "C ������ ����" << endl;


}

// ���α׷� ����: <Ctrl+F5> �Ǵ� [�����] > [��������� �ʰ� ����] �޴�
// ���α׷� �����: <F5> Ű �Ǵ� [�����] > [����� ����] �޴�

// ������ ���� ��: 
//   1. [�ַ�� Ž����] â�� ����Ͽ� ������ �߰�/�����մϴ�.
//   2. [�� Ž����] â�� ����Ͽ� �ҽ� ��� �����մϴ�.
//   3. [���] â�� ����Ͽ� ���� ��� �� ��Ÿ �޽����� Ȯ���մϴ�.
//   4. [���� ���] â�� ����Ͽ� ������ ���ϴ�.
//   5. [������Ʈ] > [�� �׸� �߰�]�� �̵��Ͽ� �� �ڵ� ������ ����ų�, [������Ʈ] > [���� �׸� �߰�]�� �̵��Ͽ� ���� �ڵ� ������ ������Ʈ�� �߰��մϴ�.
//   6. ���߿� �� ������Ʈ�� �ٽ� ������ [����] > [����] > [������Ʈ]�� �̵��ϰ� .sln ������ �����մϴ�.
