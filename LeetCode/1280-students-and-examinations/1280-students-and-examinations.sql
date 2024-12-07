SELECT student_id,student_name,subject_name,(
        SELECT COUNT(*) 
        FROM Examinations e
        WHERE e.student_id = a.student_id
          AND e.subject_name = a.subject_name
    ) attended_exams
FROM (SELECT student_name,student_id,subject_name
FROM Students CROSS JOIN Subjects) a 
ORDER BY student_id,subject_name