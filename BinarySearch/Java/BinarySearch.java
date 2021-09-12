package com.company;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
    int number = 0;
    int n;

	Scanner scan = new Scanner(System.in);

	n = scan.nextInt();

	int arr [] = new int[n];

	for(int i = 0; i < n; i++){
		int item = scan.nextInt();
		arr[i] = item;
	}

	System.out.println();

	for(int i = 0; i < n; i++){
		System.out.println(arr[i]);
	}

	number = scan.nextInt();

	int low = 0;
	int high = n;

	while(high - 1 > low){
		int mid = (low + high) / 2;

		if(number < arr[mid]){
			high = mid;
		}
		else {
			low = mid;
		}
 	}

	if(arr[low] == number){
		System.out.println(low);
	}
	else {
		System.out.println("Not found");
	}
    }
}
