# Write your MySQL query statement below
SELECT Name as "Customers" FROM Customers
Where Id NOT IN (
	Select Distinct CustomerId FROM Orders
);