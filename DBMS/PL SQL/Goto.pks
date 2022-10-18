-- - GOTO

-- - Here you can see the below output statement is printed first

DECLARE
counter int:=0;
BEGIN
GOTO somepoint;
<<newpoint>>
dbms_output.put_line('A ' || 'is one of the alphabet');
counter:=1;
<<somepoint>>
dbms_output.put_line('Skipped the step');
IF counter<0 then
GOTO newpoint;
END IF;
END
