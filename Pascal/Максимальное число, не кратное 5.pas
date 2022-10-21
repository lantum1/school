Var
n,a,m,i:integer;
Begin
read(n);
m:=0;
for i:=1 to n do
begin
  read(a);
  if (a mod 5 <> 0) and (a>m) then m:=a;
end;
write(m);
End.