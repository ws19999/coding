SELECT x,y,z,
CASE WHEN x+y>z and y+z>x and z+x>y THEN "Yes" ELSE "No" END AS triangle
FROM Triangle
