SELECT a.name
FROM Employee a
WHERE (SELECT COUNT(*) FROM Employee b WHERE b.managerId = a.id)>=5