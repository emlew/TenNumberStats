/**
 ** This program prompts the user to enter 10 numbers and 
 ** then calculates the total, average, smallest, and 
 ** largest of those numbers. It also calculates how 
 ** frequently the smallest and largest numbers occur.
 **
 ** Author: Emily Lewis
 ** Date: 9/9/2022
 **
 **/

#include <iostream>

using namespace std;

int main() {
  int nums[10];
  double total = 0;
  
  cout << "Please enter ten numbers:" << endl;
  for (int i = 0; i < 10; i++) //loop to put each number in the array
  {
    int n;
    cin >> n;
    if (n<0) //check to make sure input is positive, ends the program if it's negative
    {
      cout << "Error. Please enter a number larger than 0." << endl;
      return 0;
    }
    nums[i] = n;
  }
  int smallest = nums[0];
  int largest = nums[0];
  for (int i=0; i<10; i++) //loop to calculate total and smallest/largest
  {
    total += nums[i];
    if (nums[i]<smallest) {
      smallest = nums[i];
    }
    if (nums[i]>largest) {
      largest = nums[i];
    }
  }
  
  int sCount = 0;
  int lCount = 0;
  for (int i=0; i<10; i++) //loop to count instances of smallest/largest
  {
    if (nums[i] == smallest) {
      sCount++;
    }
    if (nums[i] == largest) {
      lCount++;
    }
  }
  //results printout
  cout << "The total of your numbers is " << total << endl;
  double avg = total / 10;
  cout << "The average is " << avg << endl;
  cout << "The smallest number is " << smallest << ", and it appears " << sCount << " times" << endl;
  cout << "The largest number is " << largest << ", and it appears " << lCount << " times" << endl;
  return 0;
}
