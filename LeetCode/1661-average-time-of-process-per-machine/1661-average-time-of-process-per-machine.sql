SELECT machine_id, ROUND(AVG(t), 3) AS processing_time
FROM (SELECT machine_id,MAX(timestamp) - MIN(timestamp) t
FROM Activity
GROUP BY machine_id, process_id
WITH ROLLUP
HAVING(process_id IS NOT NULL)) a
GROUP BY machine_id