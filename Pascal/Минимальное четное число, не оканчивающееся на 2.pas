Var
n,a,b,m,i:integer;
Begin
m:=30001;
Repeat
  read(a);
  if (a mod 10 <> 2) and (a mod 2 = 0) and (a <> 0) and (a<m) then m:=a;
Until (a=0);
write (m);
End.