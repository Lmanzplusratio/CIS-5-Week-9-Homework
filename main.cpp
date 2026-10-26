#include <iostream>

// Homework 9 — Isaiah Salvatierra
// CIS 5 Week 09 · Menu on the lab
// Paste your lab functions here, or fill the TODOs.

using std::cout;
using std::cin;
using std::endl;

void printMenu() // Doesn't return, only void function. Job is to print.
{
  cout << "1) Average  2) High  3) Quit\n";
}

void printChoice() // Another void function used to print, we will use this to fastrack/declutter amount of code for cout choice made from the cin.
{
 cout << "Choice: ";
}

double average (const int a[], int n) //Function who computes and returns the average.
{ 
 if (n==0)
 {
 return 0;
 }
  int sum = 0;
   for (int i = 0; i < n; ++i) sum +=a[i];
 return sum * 1.0/n; // This returns the sum/stores the sum from the function to be used later whenver we call it.
}

void printSummary (double avg)
{
 cout << endl << "Average: " << avg << endl;
}

int high (const int a[], int n) // TODO: return the max. Seed from a[0].
{
 int N = 4;
 int scores[] = {80, 90, 70, 100};
 int hi = scores[0];
 int sum = 0;
 for (int i = 0; i < N; ++i) // For loop that lets us get a maximum for the elements of the array
  {
    sum += scores[i];
    if (scores[i] > hi)
    {
    hi = scores[i];
    }
  }
 return hi;
}

int main() // Main function, we will call the other functions we made inside this one
{
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  int choice = 0;
 
  do {
    printMenu();
    cin >> choice;
    if (choice == 1)
    {
      double avg = average(scores, N);
      printChoice();
      cout << choice;
      printSummary(avg);
    }
    else if (choice == 2) 
    {
      int top = high(scores, N);
      printChoice();
      cout << choice << endl << "High: " << top << endl;
    } 
  } while (choice != 3); // Not operator. Once the do-while loop check not 3, it exits the loops and returns whatever is inside the main function
    printChoice();
    cout << choice << endl;
 
  return 0;
}