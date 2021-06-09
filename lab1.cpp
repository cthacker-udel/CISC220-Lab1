/*
 * lab1.cpp
 *
 *  Created on: Jun 7, 2021
 *      Author: Cameron Thacker
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void func1(string,int);

void func2(string,int);

void func3(string,int);

void func4(string,int,int,int);

void func5(string,int,int[],int,int);

void func6(string,int,int,int);

void func7(char[],int,int);

void func8(string,int,int[],int);

void func9(string,int,int);

void func10(string,int,int);

void func11(string,int,int);

bool func12a(string,int,char,int);

void func12b(string,int,string,int,int);


int main() {
	cout << "Hello World!" << endl;
	string str0 = "ha";
	int x = 12;
	func1(str0,x);

	/*****************************************************/
	string string1 = "etxlurbaesrwainuts"; // 18 characters total
	func2(string1,18);/*****************************************************/
	string string2 = "psheskmarcaphulc";
	func3(string2,16);
	/*****************************************************/
	string str3 = "blek_vpbq_utxsreknmoihs_neubr_symluljiwsez_aksivnzdw";
	func4(str3,52,6,34);
	/*****************************************************/
	string base1 = "woelihnbatmeudoirhdxkj";
	int orig[] = {2,4,1,7,2,-2,3,1,3,7,-8};
	func5(base1,22,orig,11,3);

	int orig2[]={2,1,3,2,1,-2,8,-3,9,-1,3};
	func5(base1,22,orig2,11,5);
	/*****************************************************/
	string s4 = "ekvmburwacvxezq_ypotural_ukinvnterzs_powezikrdpvnbjesbsk!";
	func6(s4, 57, 3, 4);
	/*****************************************************/
	//char arr5[] = {'a','s','x','j','t','i','h','o','q','e','p','w','v','t','z','m','i','h','y','m','k','d','i','c'};
	char exampleArr[] = {'a','b','c','d','e','f','g','h','i','j'};
	int rot = 4;
	int len = 10;
	func7(exampleArr,10,rot);
	//int len = 24;func7(arr5,len,7);
	/*****************************************************/
	string s6 = "xezuhnbl_uiplypdhqlb";
	len = 20;int arr6[] = {2351,92837,482,65,1039,233,23095,1,2037,693842,283};
	int len2 = 11; func8(s6,len,arr6,len2);
	/*****************************************************/
	string s7 = "gboehdkixkwpmngzicosygmeuqlaltcvwdge";
	len = 36; func9(s7,len,6);
	/*****************************************************/
	string s8 = "gboehdpixkwpangzicjsygmeaqlaltmvwdgeabndckswoshbk";
	len = 49; func10(s8,len,7);
	/*****************************************************/
	string s9 ="w_orp_eshmueryasaa_nootetkdtbueteei_ars!vsfib_t!e_fslg_!rye_yra_";
	len = 64; func11(s9,len,8);
	/*****************************************************/
	string somechars="rstlne";
	string test = "arktole";
	for (int i = 0; i < 7; i++) {
		if (func12a(somechars,6,test[i],0))
		{
			cout << test[i] << " in charset"<<endl;
		}
		else {
			cout << test[i] << " not in charset"<<endl;
		}
	}
	/*****************************************************/
	string decipher = "bchzxivkjndpqsjiffrguxhjtb_firskz_azlckmjoxkrspktc_ctprwepjznftjkyzxtkpwvueqnrqtckuyb!";
	int len1 = 86;
	string notchars = "bcfjkpqruvxz";
	int len1a = 12;
	func12b(decipher,len1,notchars,len1a,0);
	return 0;
}


void func1(string s, int ct){

	for(int i = 0; i < ct; i++){
		cout << s << endl;
	}

}

void func2(string s, int len){

	for(int i = 0; i < len; i++){
		cout << s.at(i) << endl;
	}

}

void func3(string s, int len){

	char letters[len+1];

	for(int i = 0; i < len; i++){
		letters[i] = s.at(i);
	}

	for(int i = len; i >= 0; i--){
		cout << letters[i] << endl;
	}

}

void func4(string s, int len, int startIndex, int areaSize){

	cout << "\nENTERING FUNC4\n" << endl;

	char sArr[len+1];
	for(int i = 0; i < len; i++){
		sArr[i] = s[i];
	}

	cout << "\nBefore reversing the pre-determined index and areaSize\n" << endl;

	for(int i = 0; i < len; i++){
		cout << sArr[i];
	}
	cout << "\n" << endl;

	startIndex -= 1;
	for(int i = startIndex+areaSize, j = startIndex; j != i; j++,i--){
		char iChar = sArr[i];
		char jChar = sArr[j];
		sArr[i] = jChar;
		sArr[j] = iChar;
	}
	cout << "\nAfter reversing the pre-determined index and areaSize\n" << endl;

	for(int i = 0; i < len; i++){
		cout << sArr[i];
	}

	cout << "\n\n" << endl;


}

void func5(string s,int len,int orig[],int size,int fsize){

	string newWord;

	int sumArray[size-fsize+1];

	int arrIndex = 0;
	int sum = 0;
	for(int i = 0; i < size-fsize+1; i++){
		for(int j = i, count = 0; count != fsize; j++){
			sum += orig[j];
			count++;
		}
		sumArray[arrIndex] = sum;
		sum = 0;
		arrIndex++;
	}

	cout << "Arr elements are : " << endl;

	for(int i = 0; i < size-fsize+1; i++){
		cout << sumArray[i] << ",";
	}
	cout << endl;

	for(int i = 0; i < size-fsize+1; i++){
		newWord += s[sumArray[i]];
	}

	cout << "The constructed word is : ";

	cout << newWord << endl;


}

void func6(string s,int len,int x,int y){

	for(int i = 0; i < len; i++){
		if(i % x == 0){
			cout << s[i];
		}
		else if(i % y == 0){
			cout << s[i];
		}
	}
	cout << "\n" << endl;


}

void printString(char arr[], int len){

	cout << "---------- PRINTING STRING -----------" << endl;
	for(int i = 0; i < len; i++){
		cout << arr[i];
	}
	cout << endl;

}


void func7(char arr[],int len,int rot){

	char newArr[len];
	for(int i = 0; i < len; i++){
		newArr[i] = arr[i];
	}

	for(int i = 0; i < len; i++){
		int newIndex = i-rot;
		if(newIndex < 0){
			newIndex += len;
		}
		//cout << "\n####\nBEFORE\n####\n" << endl;
		//printString(arr,len);
		char currChar = newArr[i];
		//char temp = arr[newIndex];
		//arr[i] = temp;
		//arr[newIndex] = currChar;
		arr[newIndex] = currChar;
		//cout << "\nnew index = " << newIndex << " and i = " << i << endl;
		//cout << "\n####\nAFTER\n####\n" << endl;
		//printString(arr,len);
	}
	printString(arr,len);
	cout << endl;



//abcdefghij
//efghijabcd


}

void func8(string s,int len,int numArr[],int lenNums){


	string newWord;
	for(int i = 0; i < lenNums; i++){

		int sum = 0;
		int theNumber = numArr[i];
		while(theNumber > 9){
			sum += theNumber % 10;
			theNumber = theNumber / 10;
		}
		sum += theNumber;
		int index = sum % len;
		newWord += s[index];
		sum = 0;
	}

	cout << "The new string = " << newWord << endl;


}

void func9(string s7,int len,int msize){

	char matrix[msize][msize];

	int index = 0;
	for(int i = 0; i < msize; i++){
		for(int j = 0; j < msize; j++){
			matrix[i][j] = s7[index];
			index++;
		}
	}

	//[0][3],[1][2],[2][1],[3][0]

    for(int i = 0; i < msize; i++){
    	cout << matrix[i][i];
    }
    cout << endl;


}

void func10(string s,int len,int msize){

	char matrix[msize][msize];

	int index = 0;
	for(int i = 0; i < msize; i++){
		for(int j = 0; j < msize; j++){
			matrix[i][j] = s[index];
			index++;
		}
	}


	for(int i = 0; i < msize; i++){
			for(int j = 0; j < msize; j++){
				cout << matrix[i][j];
			}
			cout << endl;
		}

	cout << endl;

	int diagIndex = msize-1;
	for(int i = 0; i < msize; i++){
		cout << matrix[i][diagIndex];
		diagIndex--;
	}
	cout << endl;

}

void func11(string s,int len,int msize){

	char matrix[msize][msize];

	int index = 0;
	for(int i = 0; i < msize; i++){
		for(int j = 0; j < msize; j++){
			matrix[i][j] = s[index];
			index++;
		}
	}

	//[0][0],[1][0],[2][0]

	for(int i = 0; i < msize; i++){

		for(int j = 0; j < msize; j++){

			cout << matrix[j][i];

		}
	}
	cout << endl;


}

bool func12a(string s,int len,char c,int ind){

	if(s[ind] == c){
		return true;
	}
	else if(ind == len){
		return false;
	}
	else{
		return func12a(s,len,c,ind+1);
	}
}

void func12b(string s,int len,string s2,int len2,int ind){
	for(int i = 0; i < len; i++){
		char currChar = s[i];
		if(func12a(s2,len2,currChar,0)){
			continue;
		}
		else{
			cout << currChar;
		}
	}
	cout << endl;
}





