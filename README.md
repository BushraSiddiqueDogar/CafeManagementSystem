# CafeManagementSystem


## ☕ Youth Cafe Billing System

This is a console-based C++ application simulating a **Cafe Billing System**. It allows users (customers) to order from a menu of **beverages**, **desserts**, and optional **extras**, with dynamic billing, tax, and discount calculation based on the total order.



### 🧾 Features

* Menu-driven system for **beverages**, **desserts**, and **extras**
* Item pricing is handled using arrays
* Customers can:

  * Select multiple items
  * Add extras like sugar, milk, or cream
  * Get automated billing with tax and discounts
* Employees can be added as a future extension
* Clear formatting and structure for easy understanding and navigation

---

### 🛠 Technologies Used

* **Language:** C++
* **Compiler:** Turbo C++ / GCC
* **Libraries:**

  * `iostream`
  * `conio.h` (used for getch-style terminal control)

---

### 📋 How It Works

1. User is prompted to choose between "Employee" and "Customer"
2. If "Customer":

   * They can choose to order from:

     * Only Beverages
     * Only Desserts
     * Both
   * For each selected category, a menu is displayed
   * User selects items and quantities
   * Extras (Milk, Cream, Sugar) can be added
   * Final bill includes:

     * Total price
     * Tax (10%)
     * Discount (5% if total >500, 10% if >1000)

---

### 💻 How to Run

1. Clone the repository:

   git clone https://github.com/yourusername/youth-cafe-billing.git
   cd youth-cafe-billing
  
2. Compile the program:
   
   g++ cafe.cpp -o cafe
  
3. Run the program:

   ./cafe

> 💡 Make sure your environment supports `conio.h`.

---

### 📦 Sample Output

```
==> Select Below Employee or Customer
Employee for Press :: e 
Customer for Press :: c  ==> Your choice : c

Welcome to Youth Cafe
'Start your day with us'
...
Enter the number of items from beverage section: 2
1. Milk Tea
2. Green Tea
Do you want extras? y/n: y
...
Your bill is: 560
We will give you 5% discount.
Final Amount: 532
```

---

### 📁 Project Structure

```
├── cafe.cpp         # Main program file
├── README.md        # Project documentation
```

---

### 📌 Future Improvements

* Add employee login and menu editing features
* Store order history using files
* GUI version using Qt or C++ WinForms
* Support for card payment simulations

---

### 📄 License

This project is for educational use only. No license applied.



