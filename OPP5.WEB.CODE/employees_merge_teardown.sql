
exec UTL_FILE.FREMOVE('DIR','employees.dat');
DROP TABLE employees;
DROP TABLE employees_staging;
DROP PACKAGE employee_pkg;
DROP TYPE employee_ntt;
DROP TYPE employee_ot;
DROP DIRECTORY dir;



/*======================================================================
| Supplement to the fifth edition of Oracle PL/SQL Programming by Steven
| Feuerstein with Bill Pribyl, Copyright (c) 1997-2009 O'Reilly Media, Inc. 
| To submit corrections or find more code samples visit
| http://oreilly.com/catalog/9780596514464/
*/

