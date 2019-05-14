// hash_.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include <array>
#include <time.h>

using namespace std;

// 데이터를 확장해보쎄요 h(k):1000 mod 1031;
// -1이 아니면 #으로 해보쎄요
// #이면 값이 차있다 없다;
// 1000개의 데이터를 랜덤으로 

int main()
{
	
	array<int, 17> arr = {1, 19, 5, 1, 18, 3, 8, 9, 14, 7, 5, 24, 1, 13, 16, 12, 5};
	/*
	// arr배열에 랜덤 값 넣기
	srand((int)time(NULL));
	for (int i = 0; i < arr.size(); i++) {
		arr[i] = rand() % 100;
	}
	// hashtable의 크기는 1031
	*/
	array<int, 19> hashtable;
	int hash;
	int M = arr.size(); //M은 arr배열의 크기
	int N = hashtable.size(); //N은 hashtable 배열의 크기

	//hashtable -1표시
	for (int i = 0; i < N; i++) {
		hashtable[i] = -1;
	}
	
	for (int j = 0; j < M; j++) {
		hash = arr[j]%hashtable.size();

		if (hashtable[hash] == -1)
			hashtable[hash] = arr[j];
		else {
			while (hashtable[hash] != -1)
				hash++;
			hashtable[hash] = arr[j];
		}
		cout<<hash << "배치 : ";
		for (int k = 0; k < N; k++) {
			cout << hashtable[k]<<' ';
		}
		cout << '\n';
		/*
		for (int k = 0; k < N; k++) {
			//hashtable의 [k]번지가 -1 이 아니면 #으로 표시
			if (hashtable[k] != -1)
				cout << '#';
			//[k]번지가 -1이라면 공백으로 표시
			else cout << ' ';
			
		}*/
		
	}
	
	
	return 0;
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
