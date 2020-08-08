//
//  main.cpp
//  CaesarCipher
//
//  Created by Luka Mitrović on 07/08/2020.
//  Copyright © 2020 Luka Mitrović. All rights reserved.
//

#include <iostream>
#include <stdio.h>

 
void encrypt(char input[]) {
 
 int n, *key;
    char *output = new char[strlen(input)];

    std::cout << "Enter the key: "<< std::endl;
    std::cin >> n;
    key = new int[n];
    for(int i = 0; i < strlen(input); i++) {
        if(input[i] >= 'a' && input[i] <= 'z') {
            output[i] = ('a' + (input[i] - 'a' + n) % 26 );
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            output[i] = ('A' + (input[i] - 'A' + n) % 26 );
        } else {
            output[i] = input[i];
        }
    }
    for(int i = 0; i < strlen(output); i++)
        std::cout << output[i];
    std::cout << std::endl;
    std::cout << "String encrypted" << std::endl;
}

void decrypt(char input[]) {
 
 int n, *key;
    char *output = new char[strlen(input)];

    std::cout << "Enter the key: "<< std::endl;
    std::cin >> n;
    key = new int[n];
    for(int i = 0; i < strlen(input); i++) {
        if(input[i] >= 'a' && input[i] <= 'z') {
            output[i] = ('z' - ('z' - input[i] + n) % 26 );
        } else if (input[i] >= 'A' && input[i] <= 'Z') {
            output[i] = ('Z' - ('Z'- input[i] + n) % 26 );
        } else {
            output[i] = input[i];
        }
    }
    for(int i = 0; i < strlen(output); i++)
        std::cout << output[i];
    std::cout << std::endl;
    std::cout << "String decrypted" << std::endl;
}

void bruteForcedecrypt(char input[]){
    int n = 26;
    char *output = new char[strlen(input)];

    for(int j = 1; j < n; j++){
        std::cout << "--------" << j << "--------" << std::endl;
        for(int i = 0; i < strlen(input); i++) {
            if(input[i] >= 'a' && input[i] <= 'z') {
                output[i] = ('z' - ('z' - input[i] + j) % 26 );
            } else if (input[i] >= 'A' && input[i] <= 'Z') {
                output[i] = ('Z' - ('Z'- input[i] + j) % 26 );
            } else {
                output[i] = input[i];
            }
        }
        for(int i = 0; i < strlen(output); i++)
            std::cout << output[i];
        std::cout << std::endl;
       
    }

}

 
 
int main(){

    char input2[256];
    std::cin >> input2;
    bruteForcedecrypt(input2);

  return 0;
}
