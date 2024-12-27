SELECT DISTINCT num ConsecutiveNums
FROM (SELECT
        num,
        id,
        LEAD(id) OVER (PARTITION BY num ORDER BY id) AS next_id,
        LEAD(id, 2) OVER (PARTITION BY num ORDER BY id) AS next2_id
    FROM Logs) a
WHERE next_id = id + 1 AND next2_id = id + 2;