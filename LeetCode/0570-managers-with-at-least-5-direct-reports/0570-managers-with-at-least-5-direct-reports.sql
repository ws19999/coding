SELECT b.name
FROM Employee a LEFT JOIN Employee b on (a.managerId = b.id )
GROUP BY b.id
HAVING COUNT(*)>=5 and b.name IS NOT NULL