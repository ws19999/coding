SELECT query_name, ROUND(AVG(rating/position),2) as quality, ROUND(100/COUNT(*)*(SELECT count(*) FROM Queries b WHERE a.query_name=b.query_name and b.rating<3),2) as poor_query_percentage
from Queries a
GROUP BY query_name