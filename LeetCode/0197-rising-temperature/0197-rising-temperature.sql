SELECT b.id ID
FROM Weather a JOIN Weather b ON (a.recordDate=b.recordDate - INTERVAL 1 DAY)
WHERE b.temperature > a.temperature