# Algorithm Challenge #19 – Generate Random Numbers in Multiple Ranges
-

🧮 Problem Description
-
This program demonstrates how to generate random numbers in C++ using rand()
and how to seed the random number generator with srand(time(NULL)).

It also shows how to limit random output using modulo (%), allowing the program
to generate digits, two-digit numbers, three-digit numbers, and more.

The approach:

1️⃣ Seed the random generator using time(NULL)  
2️⃣ Use rand() to produce a base random value  
3️⃣ Apply modulo (%) to control the range  
4️⃣ (Optional) Use RandomNumber(From, To) for custom ranges  

💡 What You’ll Learn
-
How rand() generates pseudo-random numbers  
Why seeding with srand(time(NULL)) is important  
Using modulo to limit random number ranges  
Producing multi-digit random values  
Creating a reusable random number function  

🧩 Example
-
Example Output:

32764 

---  
7  

---  
43  

---  
512  

---  

84219  

📂 File Information
-
Language: C++  
File Name: random_range_generator.cpp  
Challenge Number: #19  

💬 Notes
-
Modulo (%) is one of the simplest and most effective ways to generate
bounded random numbers. This technique is commonly used in simulations,
games, and probability-based algorithms.

🔗 GitHub Repository
-
www.linkedin.com/in/ahmad-sindi-61550b325

🏷️ Tags
-
#Cpp #RandomNumbers #Algorithms #CodingChallenge  
#ProgrammingBasics #MathLogic #Simulation  
#CleanCode #DeveloperJourney #STEM  
#LearnToCode #CodeNewbie #ProblemSolving
