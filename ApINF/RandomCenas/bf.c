//
//  bf.c
//  ApInf
//
//  Created by Samuel Barata on 18/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int bf(){
	char answer[] = "aaaaaa";
	bool pass = false;
	int count1, count2, count3, count4, count5, count6, count7, count8, count9, count10, count11, count12, count13, count14, count15=0;/*
	var count1: Int = 0
	var count2: Int = 0
	var count3: Int = 0
	var count4: Int = 0
	var count5: Int = 0
	var count6: Int = 0
	var count7: Int = 0
	var count8: Int = 0
	var count9: Int = 0
	var count10: Int = 0
	var count11: Int = 0
	var count12: Int = 0
	var count13: Int = 0
	var count14: Int = 0
	var count15: Int = 0*//*
	int GlobalCount = 0;
	//char num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char letras1[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D', 'e', 'E', 'f', 'F', 'g', 'G', 'h', 'H', 'i', 'I', 'j', 'J', 'k', 'K', 'l', 'L', 'm', 'M', 'n', 'N', 'o', 'O', 'p', 'P', 'q', 'Q', 'r', 'R', 's', 'S', 't', 'T', 'u', 'U', 'v', 'V', 'w', 'W', 'x', 'X', 'y', 'Y', 'z', 'Z', ' ','\0'};
	char password[15];
	puts("Start");
	while (pass == false){
	    while (count15 <= 63){
	        while (count14 <= 63){
	            while (count13 <= 63){
	                while (count12 <= 63){
	                    while (count11 <= 63){
	                        while (count10 <= 63){
	                            while (count9 <= 63){
	                                while (count8 <= 63){
	                                    while (count7 <= 63){
	                                        while (count6 <= 63){
	                                            while (count5 <= 63){
	                                                while (count4 <= 63){
	                                                    while (count3 <= 63){
	                                                        while (count2 <= 63){
	                                                            while (count1 <= 63){
	                                                                strcat(password[15],letras1[count15], letras1[count14], letras1[count13], letras1[count12], letras1[count11], letras1[count10], letras1[count9], letras1[count8], letras1[count7], letras1[count6], letras1[count5], letras1[count4], letras1[count3], letras1[count2], letras1[count1]);
	                                                                printf(" %d\n", password);
	                                                                if (answer == password) {
	                                                                    pass = true;
	                                                                    print("Password Fount: %d, %d", password, GlobalCount);
	                                                                    return 0;
	                                                                }
	                                                                GlobalCount++;
	                                                                count1=count1+1;
	                                                            }
	                                                            count1=0;
	                                                            count2++;
	                                                        }
	                                                        count1=0;
	                                                        count2=0;
	                                                        count3++;
	                                                    }
	                                                    count1=0;
	                                                    count2=0;
	                                                    count3=0;
	                                                    count4++;
	                                                }
	                                                count1=0;
	                                                count2=0;
	                                                count3=0;
	                                                count4=0;
	                                                count5++;
	                                            }
	                                            count1=0;
	                                            count2=0;
	                                            count3=0;
	                                            count4=0;
	                                            count5=0;
	                                            count6++;
	                                        }
	                                        count1=0;
	                                        count2=0;
	                                        count3=0;
	                                        count4=0;
	                                        count5=0;
	                                        count6=0;
	                                        count7++;
	                                    }
	                                    count1=0;
	                                    count2=0;
	                                    count3=0;
	                                    count4=0;
	                                    count5=0;
	                                    count6=0;
	                                    count7=0;
	                                    count8++;
	                                }
	                                count1=0;
	                                count2=0;
	                                count3=0;
	                                count4=0;
	                                count5=0;
	                                count6=0;
	                                count7=0;
	                                count8=0;
	                                count9++;
	                            }
	                            count1=0;
	                            count2=0;
	                            count3=0;
	                            count4=0;
	                            count5=0;
	                            count6=0;
	                            count7=0;
	                            count8=0;
	                            count9=0;
	                            count10++;
	                        }
	                        count1=0;
	                        count2=0;
	                        count3=0;
	                        count4=0;
	                        count5=0;
	                        count6=0;
	                        count7=0;
	                        count8=0;
	                        count9=0;
	                        count10=0;
	                        count11++;
	                    }
	                    count1=0;
	                    count2=0;
	                    count3=0;
	                    count4=0;
	                    count5=0;
	                    count6=0;
	                    count7=0;
	                    count8=0;
	                    count9=0;
	                    count10=0;
	                    count11=0;
	                    count12++;
	                }
	                count1=0;
	                count2=0;
	                count3=0;
	                count4=0;
	                count5=0;
	                count6=0;
	                count7=0;
	                count8=0;
	                count9=0;
	                count10=0;
	                count11=0;
	                count12=0;
	                count13++;
	            }
	            count1=0;
	            count2=0;
	            count3=0;
	            count4=0;
	            count5=0;
	            count6=0;
	            count7=0;
	            count8=0;
	            count9=0;
	            count10=0;
	            count11=0;
	            count12=0;
	            count13=0;
	            count14++;
	        }
	        count1=0;
	        count2=0;
	        count3=0;
	        count4=0;
	        count5=0;
	        count6=0;
	        count7=0;
	        count8=0;
	        count9=0;
	        count10=0;
	        count11=0;
	        count12=0;
	        count13=0;
	        count14=0;
	        count15++;
	    }
	    printf("error");
	}*/
    return 0;
}
