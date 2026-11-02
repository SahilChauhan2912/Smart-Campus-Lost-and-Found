# 🎓 Smart Campus Lost & Found Management System

## 📌 Project Overview

The **Smart Campus Lost & Found Management System** is a menu-driven application developed using the C programming language.

The main purpose of this project is to help students and staff report lost and found items within a college or university campus.

Users can register lost items, report found items, search for specific items, find matching lost and found records, and claim found items.

This system provides a simple and organized way to manage lost and found information on campus.

---

## 🎯 Objectives

* To provide a simple system for reporting lost items.
* To maintain records of found items.
* To make searching for lost and found items easier.
* To identify possible matches between lost and found items.
* To allow users to claim found items.
* To reduce the chances of losing personal belongings on campus.

---

## ✨ Features

### 1. Report Lost Item

Users can enter details about an item they have lost, including:

* Item name
* Item colour
* Location
* Item description

### 2. Report Found Item

Users can register items they have found on campus by entering their details.

### 3. View Lost Items

Displays all currently unclaimed lost item records.

### 4. View Found Items

Displays all currently unclaimed found item records.

### 5. Search Item

Allows users to search for an item using its exact name.

### 6. Find Matching Items

Compares lost and found records using:

* Item name
* Item colour

If both details match exactly, the system displays a possible match.

### 7. Claim Found Item

Allows users to claim an available found item by entering its record number.

---

## 🛠️ Technologies Used

| Technology    | Purpose                             |
| ------------- | ----------------------------------- |
| C Programming | Main programming language           |
| GCC Compiler  | Compiling the program               |
| VS Code       | Code editor                         |
| Git & GitHub  | Project version control and hosting |

---

## 📚 C Concepts Used

This project demonstrates the following C programming concepts:

* Variables and Data Types
* Arrays
* Two-Dimensional Character Arrays
* Strings
* String Handling Functions (`strcmp()`)
* Functions
* Function Arguments
* Pointers
* Loops (`for`, `do-while`)
* Conditional Statements (`if-else`, `switch`)
* Structures are not used in this version.

---

## 📂 Project Structure

```text
Smart-Campus-Lost-and-Found/
│
├── main.c
└── README.md
```

**main.c:** Contains the complete source code, including the main menu and all functions.

**README.md:** Contains project documentation and instructions.

---

## ⚙️ How to Run the Project

### Step 1: Clone the Repository

```bash
git clone YOUR_GITHUB_REPOSITORY_LINK
```

### Step 2: Open the Project Folder

```bash
cd Smart-Campus-Lost-and-Found
```

### Step 3: Compile the C Program

```bash
gcc main.c -o lostfound
```

### Step 4: Run the Program

**For Windows:**

```bash
lostfound.exe
```

**For Linux / macOS:**

```bash
./lostfound
```

---

## 🖥️ Program Display / Sample Output

### 1. Main Menu

```text
========================================
       SMART CAMPUS LOST & FOUND
========================================

1. Report Lost Item
2. Report Found Item
3. View Lost Items
4. View Found Items
5. Search Item
6. Find Matching Items
7. Claim Found Item
8. Exit

========================================
Enter your choice:
```

### 2. Report Lost Item

```text
----------------------------------------
          REPORT LOST ITEM
----------------------------------------

Enter item name: Wallet
Enter item colour: Black
Enter location: Library
Enter item description: Black leather wallet

Item registered successfully!
```

### 3. Report Found Item

```text
----------------------------------------
          REPORT FOUND ITEM
----------------------------------------

Enter item name: Wallet
Enter item colour: Black
Enter location: Cafeteria
Enter item description: Black leather wallet found

Item registered successfully!
```

### 4. View Lost Items

```text
========== LOST ITEMS ==========

Record Number: 1
Item Name: Wallet
Colour: Black
Location: Library
Description: Black leather wallet

--------------------------------
```

### 5. View Found Items

```text
========== FOUND ITEMS ==========

Record Number: 2
Item Name: Wallet
Colour: Black
Location: Cafeteria
Description: Black leather wallet found

--------------------------------
```

### 6. Search Item

```text
Enter item name to search: Wallet

Item Found!

Record Number: 1
Name: Wallet
Colour: Black
Location: Library
Description: Black leather wallet
Status: Lost Item
Claim Status: Not Claimed
```

### 7. Find Matching Items

```text
======= MATCHING ITEMS =======

Possible Match Found!

Item Name: Wallet
Colour: Black

Lost Location: Library
Found Location: Cafeteria

Lost Record: 1
Found Record: 2
```

### 8. Claim Found Item

```text
======= CLAIM FOUND ITEM =======

Enter record number to claim: 2

Item claimed successfully!
Item Name: Wallet
```

### 9. Exit

```text
Thank you for using our system!
```

---

## 🔄 Working of the Project

1. The program displays a menu with eight options.
2. The user selects an operation.
3. The system accepts item information through keyboard input.
4. Item details are stored in arrays during program execution.
5. Users can view and search registered records.
6. The matching function compares lost and found item names and colours.
7. The claim function updates the claim status of a found item.
8. The program continues until the user selects Exit.

---

## ⚠️ Current Limitations

* The system can store a maximum of 100 item records.
* Item records are stored in memory and are lost when the program closes.
* Searching requires an exact item name.
* Matching requires the item name and colour to match exactly.
* The current version does not include user authentication or an admin login system.

---

## 🚀 Future Improvements

The project can be improved by adding:

* Permanent data storage using file handling.
* Admin login and user authentication.
* Date and time of item registration.
* Contact details of the person reporting an item.
* More advanced item-matching functionality.
* A graphical user interface.
* A database for managing large numbers of records.

---

## 🎓 Project Information

**Project Name:** Smart Campus Lost & Found Management System

**Programming Language:** C

**Project Type:** Academic / College Practical Project

**Developed By:** Sahil

**Institution:** Chandigarh University

---

## 📌 Conclusion

The Smart Campus Lost & Found Management System is a basic C programming project designed to make lost and found item management easier within a college campus.

It demonstrates the practical use of arrays, strings, functions, pointers, loops, and conditional statements to solve a real-world problem.

The project can be further developed into a complete campus management application by introducing file handling, databases, and a graphical user interface.

---
