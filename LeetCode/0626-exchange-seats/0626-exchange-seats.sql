SELECT a.id, CASE WHEN b.student IS null THEN a.student ELSE b.student END AS student
FROM Seat a LEFT JOIN Seat b ON (CASE WHEN a.id%2=1 THEN a.id=b.id-1 ELSE a.id=b.id+1 END)