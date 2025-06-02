## Convert String to Title Case CC


### 🔍 **Detailed Breakdown**

#### 1. `int T; cin >> T;`

Reads the number of test cases. For example, if input is:

```
5
```

It means the next 5 lines are test cases.

#### 2. `cin.ignore();`

After reading the integer `T`, there is still a newline character in the input buffer. `cin.ignore()` clears it so `getline()` works properly afterward.

#### 3. `while (T--) {...}`

Loops over all test cases, one per line.

#### 4. `getline(cin, line);`

Reads the full sentence into `line`. Unlike `cin >>`, `getline` captures the entire line including spaces.

#### 5. `istringstream iss(line);`

This is a handy tool to split a sentence into words. It works like a stream but on a string.

#### 6. `while (iss >> word) {...}`

This loop reads one word at a time from the sentence.

#### 7. Inside this loop:

* It checks if the word is an **acronym** (all letters are uppercase).
* If it **is**, it prints the word as-is.
* If it **isn't**, it converts it to **title case**:

  * First letter → `toupper`
  * Rest → `tolower`

#### 8. `if (!first) cout << ' ';`

Ensures a space is printed between words — but **not before the first word**.

#### 9. `cout << '\n';`

Moves to the next line after printing each modified sentence.

---

### 🧠 Key Concepts Used

* `getline()` to read full lines
* `istringstream` to split by space
* Character functions: `toupper()`, `tolower()`, `isupper()`
* Loop control using a `bool first` flag to manage spacing

---

Would you like this converted into [Python](f), or need a [version with comments in code](f) for easier learning?
