SELECT ROUND(SUM(tiv_2016),2) tiv_2016
FROM Insurance
WHERE tiv_2015 in (SELECT tiv_2015
FROM Insurance
GROUP BY tiv_2015
HAVING count(pid)>=2) 
and pid in (SELECT pid
FROM Insurance
GROUP BY lat,lon
HAVING count(pid)=1)