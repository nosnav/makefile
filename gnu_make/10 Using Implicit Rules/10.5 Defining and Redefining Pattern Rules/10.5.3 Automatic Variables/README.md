#Automatic Variables  

| Item | Variables | Description |
| --- | --- | --- |
| 01 | $@ | thay thế tên của target |
| 02 | $% | tên target con, sử dụng khi target có chứa target con |
| 03 | $< | thay thế tên của prerequisite đầu tiên | 
| 04 | $? |  |
| 05 | $^ | thay thế tên của tất cả prerequisite |
| 06 | $+ |  | 
| 07 | $| |  |
| 08 | $* |  |
| 09 | $? |  |
|  |  |  |
| 10 | $(@D) |  |
| 11 | $(@F) |  |
| 12 | $(*D) |  |
| 13 | $(*F) |  |
| 14 | $(%D) |  |
| 15 | $(%F) |  |
| 16 | $(<D) |  |
| 17 | $(<F) |  |
| 18 | $(^D) |  |
| 19 | $(^F) |  |
| 20 | $(+D) |  |
| 21 | $(+F) |  |
| 22 | $(?D) |  |
| 23 | $(?F) |  |
  
01. $@ :thay thế tên của target  
```makefile
name_target:
    @echo $@
```  
thì kết quả in ra là `name_target`  

02. $% :thay thế tên target con, sử dụng khi target có chứa target con
```makefile
foo.a(bar.o):
	@echo $@
	@echo $%
```  
kết quả in ra là $@ = foo.a và $% = bar.o  

03. $< :thay thế tên của prerequisite đầu tiên
```makefile
foo: a.c b.c c.c
	@echo $<
```  
kết quả in ra là `a.c`  

04. $?
05. $^ thay thế tên của tất cả prerequisite
06. $+  
07. $|
08. $*
09. $?
 
10. $(@D)
11. $(@F)
12. $(*D)
13. $(*F)
14. $(%D)
15. $(%F)
16. $(<D)
17. $(<F)
18. $(^D)
19. $(^F)
20. $(+D)
21. $(+F)
22. $(?D)
23. $(?F)