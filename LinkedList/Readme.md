<!-- Create Table Command -->
CREATE TABLE Employee (
    id int,
    name     VARCHAR(50),
    birth_date DATE,
    phone VARCHAR(12),
    gender VARCHAR(1)
);


<!-- Insert value command -->
INSERT into Employee (id, name, birth_date, phone, gender) 
values (3, "Ragini", "10-04-2003"," 9693610821", "F");


<!-- INSERT MULTIPLE ROW AT TIME -->
INSERT into Employee (id, name, birth_date, phone, gender) 
values 
(5, "Manu", "14-03-2004"," 9693610678", "F"),
(6, "Sonam", "13-01-2003"," 9693610987", "F"),
(7, "Ramesh", "04-11-2002"," 96936108878", "F");


<!-- MySQL Constraints -->
CREATE TABLE Personal (
  id INT NOT NULL UNIQUE,
  name VARCHAR(50) NOT NULL,
  age INT NOT NULL CHECK( age >= 18 ),
  gender VARCHAR(1) NOT NULL,
  phoneNo VARCHAR(12) NOT NULL UNIQUE,
  city VARCHAR(20) NOT NULL DEFAULT 'BIHAR'
);

INSERT INTO Personal(id, name, age, gender, phoneNo, city)
VALUES
(4, "John Doe", 18, "M", 9694610356, "Pune" );

<!-- MySQL SELECT With WHERE Clause  -->
SELECT * FROM Personal;
id	name	age	gender	phoneNo	city
1	Sidhant	22	M	9694610845	Patna
2	Rohit	25	M	969461085	Aurangabad
3	MOhit	25	M	969461035	
4	John Doe	18	M	9694610356	Pune


SELECT id, name, phoneNo FROM Personal;
id	name	phoneNo
1	Sidhant	9694610845
2	Rohit	969461085
3	MOhit	969461035
4	John Doe	9694610356

<!-- Modify the column name -->
name AS Name, phoneNo AS Phone_Number

<!-- Show and check conditional based data -->
<!-- Using where clause -->

SELECT id, name, phoneNo, age FROM Personal
WHERE age >= 20;

id	name	age
1	Sidhant	22
2	Rohit	25
3	MOhit	25

<!-- SELECT DATA WITH AND, NOT & OR OPERATOR -->
SELECT id, name, age FROM Personal
WHERE age >= 18 and age <= 22;

id	name	age
1	Sidhant	22
4	John Doe	18

SELECT id, name, age FROM Personal
WHERE age NOT BETWEEN 18 AND 22;

id	name	age
2	Rohit	25
3	MOhit	25

SELECT id, name, age FROM Personal
WHERE NOT age >= 20;
id	name	age
4	John Doe	18

<!-- IN Operator -->

SELECT * FROM Personal
WHERE age IN (22, 18, 25);


id	name	age	gender	phoneNo	city
1	Sidhant	22	M	9694610845	Patna
2	Rohit	25	M	969461085	Aurangabad
3	MOhit	25	M	969461035	
4	John Doe	18	M	9694610356	Pune


SELECT * FROM Personal
WHERE age NOT IN (22, 18, 25);
SQL query successfully executed. However, the result set is empty.


SELECT * FROM Personal
WHERE id  IN (1, 2);

id	name	age	gender	phoneNo	city
1	Sidhant	22	M	9694610845	Patna
2	Rohit	25	M	969461085	Aurangabad


<!-- MySQL BETWEEN & NOT BETWEEN Operator -->
SELECT * FROM Personal
WHERE id BETWEEN 1 AND 3;

id	name	age	gender	phoneNo	city
1	Sidhant	22	M	9694610845	Patna
2	Rohit	25	M	969461085	Aurangabad
3	MOhit	25	M	969461035	

SELECT * FROM Personal
WHERE id NOT BETWEEN 1 AND 3;

id	name	age	gender	phoneNo	city
4	John Doe	18	M	9694610356	Pune

<!-- LIKE OPERATOR -->
SELECT * FROM Personal 
WHERE name LIKE "s%";

id	name	age	gender	phoneNo	city
1	Sidhant	22	M	9694610845	Patna
5	Surbhi	21	F	8762123214	Sasaram

SELECT * FROM Personal 
WHERE name LIKE "%hi%";

id	name	age	gender	phoneNo	city
2	Rohit	25	M	969461085	Aurangabad
3	MOhit	25	M	969461035	
5	Surbhi	21	F	8762123214	Sasaram
6	Khushi	20	F	6200126512	Munger

SELECT * FROM Personal 
WHERE name LIKE "r%" OR name LIKE "S%";

id	name	age	gender	phoneNo	city
1	Sidhant	22	M	9694610845	Patna
2	Rohit	25	M	969461085	Aurangabad
5	Surbhi	21	F	8762123214	Sasaram


SELECT * FROM Personal 
WHERE name LIKE "_ohi%";

id	name	age	gender	phoneNo	city
2	Rohit	25	M	969461085	Aurangabad
3	MOhit	25	M	969461035	

<!-- MySQL ORDER BY & DISTINCT  -->

SELECT * FROM Personal 
ORDER BY age DESC;

 id	name	age	gender	phoneNo	city
2	Rohit	25	M	969461085	Aurangabad
3	MOhit	25	M	969461035	
1	Sidhant	22	M	9694610845	Patna
5	Surbhi	21	F	8762123214	Sasaram
6	Khushi	20	F	6200126512	Munger
4	John Doe	18	M	9694610356	Pune

SELECT * FROM Personal 
WHERE gender = 'M' 
ORDER BY age DESC;

id	name	age	gender	phoneNo	city
2	Rohit	25	M	969461085	Aurangabad
3	MOhit	25	M	969461035	
1	Sidhant	22	M	9694610845	Patna
4	John Doe	18	M	9694610356	Pune

SELECT DISTINCT gender FROM Personal;

gender
M
F


<!-- MySQL LIMIT & OFFSET -->
SELECT id, name, age, city FROM Personal
limit 2;
id	name	age	city
1	Sidhant	22	Patna
2	Rohit	25	Aurangabad


SELECT id, name, age, city, gender FROM Personal
WHERE gender = "F"
limit 2;

id	name	age	city	gender
5	Surbhi	21	Sasaram	F
6	Khushi	20	Munger	F

SELECT id, name, age, city, gender FROM Personal
limit 3, 2;
<!-- 3 is offset and 2 is limit -->


<!-- DELETE TABLE -->
DROP TABLE Employee;
This command permanently deletes the table and all data inside it.

It cannot be undone, so be sure before running it.

<!-- ------------------------------------------------------------------------------------ -->

Empolyee
id	name	age	gender	salary
1	Sidhant	25	M	35000
2	Khushi	26	F	35000
3	Rahul	23	M	40000
4	Renu	25	F	38000
5	Ragini	24	F	39000
6	Supriya	23	F	36000

<!--  -->
SELECT COUNT(salary) * 1 AS total FROM Empolyee;
total
6

<!--  -->

SELECT SUM(salary) * 1 AS total FROM Empolyee;
total
223000

SELECT MAX(salary) * 1 AS MAXVALUE FROM Empolyee;
MAXVALUE
40000

SELECT MAX(salary) * 1 AS MAXVALUE, id, name FROM Empolyee;
MAXVALUE	id	name
40000	3	Rahul


INSERT INTO Employee (id , name , age , gender, salary)
VALUES 
( 1, "Sidhant", 22, "M", 70000),
( 2, "Kartik", 22, "M", 80000),
( 3, "Aadarsh", 26, "M", 60000),
( 4, "Aaditya", 28, "M", 80000),
( 5, "Sonam", 20, "M", 90000),
( 6, "Shubham", 19, "M", 50000),
( 7, "Anu", 18, "M", 60000);


------------------------------------------------------------------------------------------------------------------
MySQL UPDATE

<!-- withour where clause in update it's update the whole column -->
UPDATE Employee
SET salary = "90000"
WHERE id = 7

UPDATE Employee
SET age = "20"
WHERE id IN (1, 2)


<!-- MySQL COMMIT & ROLLBACK  -->

SELECT * FROM Employee;

COMMIT;

UPDATE Employee
SET age = "22"
WHERE id = 1

ROLLBACK; 


<!--  PRIMARY KEY & FOREIGN KEY -->

PRIMARY KEY
✅ Definition:

A Primary Key uniquely identifies each row in a table.
It must be :
    Unique (no duplicates)
    Not NULL

```sql 
CREATE TABLE Department (
    dept_id INTEGER,
    dept_name TEXT,
    PRIMARY KEY(dept_id)
);
```

FOREIGN KEY
✅ Definition:

A Foreign Key is a column (or group of columns) in one table that refers to the Primary Key in another table.
It creates a relationship between two tables.

✅ Syntax:

```sql
CREATE TABLE Employee (
    emp_id INTEGER PRIMARY KEY,
    name TEXT,
    dept_id INTEGER,
    FOREIGN KEY (dept_id) REFERENCES Department(dept_id)
);
```

This means:
    Employee.dept_id refers to Department.dept_id
    You cannot insert a dept_id in Employee unless it exists in Department


<!-- INNER JOIN -->

What is an INNER JOIN?

An INNER JOIN returns only the rows where there is a match in both tables based on a related column (usually a foreign key).

```sql
SELECT columns
FROM table1
INNER JOIN table2
ON table1.common_column = table2.common_column;
```

| Concept                 | Explanation                                                               |
| ----------------------- | ------------------------------------------------------------------------- |
| **Table**               | Collection of rows and columns storing structured data.                   |
| **Primary Key**         | Uniquely identifies records in a table.                                   |
| **Foreign Key**         | Links data across tables using references.                                |
| **Constraints**         | Rules applied to table columns (e.g., NOT NULL, CHECK).                   |
| **Transaction**         | A sequence of SQL commands that are executed as a unit (COMMIT/ROLLBACK). |
| **Joins**               | Combine data from two or more tables.                                     |
| **LIKE**                | Used for pattern matching with `%` and `_`.                               |
| **Aggregate Functions** | Perform calculations on multiple rows (e.g., SUM, COUNT).                 |


<!-- LEFT JOIN & RIGHT JOIN -->

## 1️⃣ LEFT JOIN (or LEFT OUTER JOIN)

### 📘 Definition:

Returns **all records from the left table**, and the **matched records from the right table**.
If no match is found in the right table, `NULL` is returned for right table columns.

### ✅ Syntax:

```sql
SELECT columns
FROM table1
LEFT JOIN table2
ON table1.common_column = table2.common_column;
```

---

### 📊 Example:

#### 🔹 Table: `Department`

| dept\_id | dept\_name |
| -------- | ---------- |
| 1        | IT         |
| 2        | HR         |
| 3        | Marketing  |

#### 🔹 Table: `Employee`

| emp\_id | name    | dept\_id |
| ------- | ------- | -------- |
| 101     | Sidhant | 1        |
| 102     | Sonam   | 2        |
| 103     | Ramesh  | 4        |

### 🔹 LEFT JOIN Query:

```sql
SELECT Employee.name, Department.dept_name
FROM Employee
LEFT JOIN Department
ON Employee.dept_id = Department.dept_id;
```

### 🔹 Output:

| name    | dept\_name |
| ------- | ---------- |
| Sidhant | IT         |
| Sonam   | HR         |
| Ramesh  | NULL       |

📝 **Ramesh** has no matching `dept_id` in the `Department` table, so it returns `NULL`.

---

## 2️⃣ RIGHT JOIN (or RIGHT OUTER JOIN)

### 📘 Definition:

Returns **all records from the right table**, and the **matched records from the left table**.
If no match is found in the left table, `NULL` is returned for left table columns.

### ✅ Syntax:

```sql
SELECT columns
FROM table1
RIGHT JOIN table2
ON table1.common_column = table2.common_column;
```

---

### 🔹 RIGHT JOIN Query:

```sql
SELECT Employee.name, Department.dept_name
FROM Employee
RIGHT JOIN Department
ON Employee.dept_id = Department.dept_id;
```

### 🔹 Output:

| name    | dept\_name |
| ------- | ---------- |
| Sidhant | IT         |
| Sonam   | HR         |
| NULL    | Marketing  |

📝 **Marketing** has no employee assigned, so `name` is `NULL`.

---

## 🧠 Summary Table

| JOIN Type  | Includes all from... | Fills NULLs from... |
| ---------- | -------------------- | ------------------- |
| LEFT JOIN  | Left Table           | Right Table         |
| RIGHT JOIN | Right Table          | Left Table          |
| INNER JOIN | Matching rows only   | N/A                 |

---

-- Total number of students
SELECT COUNT(*) AS total_students FROM Student;

-- Average marks of students
SELECT AVG(marks) AS average_marks FROM Student;

-- Highest marks scoredc
SELECT MAX(marks) AS highest_marks FROM Student;

-- Lowest marks scored 
SELECT MIN(marks) AS lowest_marks FROM Student;


What does GROUP BY do in SQL?

The GROUP BY clause is used to group rows that have the same values in one or more columns, so that aggregate functions (like COUNT(), SUM(), AVG(), MAX(), etc.) can be applied to each group separately.
🧠 Think of it like this:

If you have a classroom of students and you want to know:
    How many boys and girls are there?
    What is the average score of students in each gender?
    How many students are there per age?


DELETE FROM Student
WHERE name = 'Supriya';

UPDATE Student
SET marks = 95
WHERE id = 3;


| Feature         | PRIMARY KEY                             | UNIQUE Constraint                        |
| --------------- | --------------------------------------- | ---------------------------------------- |
| **Uniqueness**  | Ensures all values are unique           | Ensures all values are unique            |
| **Null Values** | Does **not** allow NULL values          | Allows **only one NULL** (in most DBMSs) |
| **Per Table**   | Only **one PRIMARY KEY** allowed        | Can have **multiple UNIQUE** constraints |
| **Purpose**     | Identifies a **record uniquely**        | Prevents duplicate values in a column    |
| **Index**       | Automatically creates a clustered index | Creates a non-clustered index            |

CREATE TABLE Student (
    id INTEGER PRIMARY KEY,
    name TEXT,
    age INTEGER,
    gender TEXT,
    marks INTEGER,
    course_id INTEGER,
    FOREIGN KEY (course_id) REFERENCES Courses(course_id)
);




---

## 🔹 `LIMIT` and `OFFSET` in SQL

These are used to **control the number of rows** returned in a query — especially useful when working with pagination or large datasets.

---

### ✅ `LIMIT 1`

Means:

> **Return only the first 1 row** from the result.

---

### ✅ `OFFSET 1`

Means:

> **Skip the first 1 row**, and return the rest (if combined with `LIMIT`).

---

### 🔍 Example:

#### Table: `Student`

| id | name    |
| -- | ------- |
| 1  | Rahul   |
| 2  | Anjali  |
| 3  | Sidhant |
| 4  | Riya    |

---

### 👇 Query:

```sql
SELECT * FROM Student
LIMIT 1 OFFSET 1;
```

**Output:**

| id | name   |
| -- | ------ |
| 2  | Anjali |

> ✅ This skips the **first row** (Rahul), and returns **1 row** (Anjali).

---

### ✅ So your statement can be reworded as:

> "`LIMIT 1` returns only one row from the result, and `OFFSET` skips the specified number of rows from the top."

Retrieve the second highest salary from the Employee table.

SELECT DISTINCT salary
FROM Employee
ORDER BY salary DESC
limit 1 OFFSET 1;