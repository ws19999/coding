SELECT employee_id, 
CASE WHEN count(*)=1 THEN sum(department_id) ELSE SUM(CASE WHEN primary_flag =1 THEN department_id ELSE 0 END) END AS department_id
FROM Employee
GROUP BY employee_id