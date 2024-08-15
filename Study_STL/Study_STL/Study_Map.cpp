// Study_STL.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <map>


using namespace std;

int main()
{
	cout << "This is Study_Map" << endl;


	cout << "<Map>\n"
		<< ": 각 노드가 key, value 쌍으로 이루어진 트리이다.\n"
		<< ": 중복을 허용하지 않는다.\n"
		<< ": Map은 first, second가 있는 pair 객체로 저장되는데, first-key로 second-value로 저장된다.\n"
		<< ": 자료를 저장할 때 내부에서 자동으로 정렬한다.\n"
		<< ": Key를 기준으로 정렬하며 오름차순으로 정렬한다.\n"
		<< ": 만약 내림차순으로 정렬하고 싶은 경우 [map<int, int, greater> map1;]처럼 사용하면 된다.\n"
		<< ": 사용하려면 헤더에 [#include <map>]을 작성해줘야 한다.\n"
		<< ": map의 기본구조는 [map<key type, value, type> 이름;]이다.\n"
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

	cout << "<m.find(" << "D" << ") 실행 시>" << endl;
	if (m.find("D") != m.end()) cout << "D 데이터 있음\n" << endl;
	else cout << "D 데이터 없음\n" << endl;

	m.erase("A");
	cout << "<특정 데이터만 삭제하는 m.erase(" << "A" << ") 후>" << endl;
	for (auto iter = m.begin(); iter != m.end(); iter++) {
		cout << "iter->first : " << iter->first << ", iter->second : " << iter->second << endl;
	}
	cout << endl;

	m.clear();
	cout << "<모든 데이터를 삭제하는 m.clear() 후>" << endl;
	if (m.find("B") != m.end()) cout << "B 데이터 있음" << endl;
	else cout << "B 데이터 없음" << endl;

	if (m.find("C") != m.end()) cout << "C 데이터 있음" << endl;
	else cout << "C 데이터 없음" << endl;


}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
