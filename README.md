# Caesar-Cipher Encryption & Decryption
Caesar Cipher is one of the simplest and most widely known encryption techniques. It is a type of substitution cipher in which each letter in the 
plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a left shift of 3, D would be replaced by A, 
E would become B, and so on. 
## Functions
 - **encrypt(char input[])** function  encrypts the message, function will ask you to provide the key,
enter the number of possitions you want your alphabet to be moved. 
 - **decrypt(char input[])** is taking the message as argument and decrypts it , you need to provide the key if you know it.
 - **bruteForcedecrypt(char input[])** is used in case you don't know the key , it outputs all 26 (in case of message written in English)
 variants of how the message can be decrypted
