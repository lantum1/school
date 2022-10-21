Var
n,a,m,i:integer;
Begin
read(n);
m:=0;
for i:=1 to n do
begin
  read(a);
  if (a mod 2 <> 0) and (a mod 3 = 0) then m:=m+1;
end;
write(m);
End.