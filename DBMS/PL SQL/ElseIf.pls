-- -ELSE IF
DECLARE
a int;
b int;

BEGIN
a:=:a;
b:=:b;

IF (a>b) then
dbms_output.put_line('A is greater than B');

ELSIF (b>a) then
dbms_output.put_line('B is greater than A');

else 
dbms_output.put_line('Both are equal');

END IF;
END
