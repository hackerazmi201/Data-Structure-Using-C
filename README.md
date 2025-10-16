# 🔢 Hashing Using Array in C

This project demonstrates how **hashing with linear probing** works using arrays in C.  
It allows users to:
- Insert elements into a hash table
- Search for an element
- Display the hash table contents

---

## 🧠 How It Works

- **Hash Function:** `key % SIZE`  
- **Collision Resolution:** Linear Probing  
- **Unoccupied Slot:** Represented by `-1`

---

## 🧩 Program Structure

Insert → Add elements into hash table

Search → Find if a key exists

Display → Show all table elements

Exit → Quit the program


---

## 🚀 Installation & Usage

Follow these steps to download, compile, and run the project on your system.

---

### 🧩 Step 1: Clone the Repository

```bash
git clone https://github.com/aneeqjafri/Hashing-Using-Array.git
```
```
cd Hashing-Using-Array
```


## ⚙️ How to Build and Run

### 🪟 On Windows

1. Download and install [MinGW](https://sourceforge.net/projects/mingw/).
2. Open **Command Prompt** in the folder containing `hashing_using_array.c`.
3. Compile:
   ```bash
   gcc hashing_using_array.c -o hashing

## Run 
```
hashing.exe
```
On Linux / macOS

Open Terminal.

Navigate to the folder containing hashing_using_array.c:

````
cd path/to/folder
````
```
gcc hashing_using_array.c -o hashing
```
```
./hashing
```

#  📦 Folder Structure <br>
📁 Hashing-Using-Array/ <br>
├── hashing_using_array.c <br>
├── README.md

## 🧑‍💻 Author

Name: Hackerazmi
GitHub: Hackerazmi201
Language Used: C
Topic: Data Structures (Hashing with Linear Probing)

# Out put

## 💻 Example Output

========== MENU ==========

Insert

Search

Display

Exit
==========================
Enter your choice: 1 <br>
Enter key to insert: 25 <br>
Inserted 25 at index 5 <br>

Enter your choice: 1  <br>
Enter key to insert: 35 <br>
Inserted 35 at index 6 <br>

Enter your choice: 2 <br>
Enter key to search: 25 <br>
Found 25 at index 5 <br>

Enter your choice: 3 <br>
Hash Table: <br>
Index 0: -1 <br>
Index 1: -1 <br>
Index 2: -1 <br>
Index 3: -1 <br>
Index 4: -1 <br>
Index 5: 25 <br>
Index 6: 35 <br>
Index 7: -1 <br>
Index 8: -1 <br> 
Index 9: -1 <br>


