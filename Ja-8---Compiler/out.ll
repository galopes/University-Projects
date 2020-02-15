declare i32 @atoi(i8*)
declare i32 @printf(i8*, ...)

define i32 @main(i32 %argc, i8** %argv) {
	call void @function.declaration.v.main.s.(i32 %argc, i8** %argv)
	ret i32 0
}

define void @function.declaration.v.main.s.(i32 %argc, i8** %argv) {
	%argc_aux = alloca i32, align 4
	%argv_aux = alloca i8**, align 8
	store i32 %argc, i32* %argc_aux, align 4
	store i8** %argv, i8*** %argv_aux, align 8
	%1 = add i1 0, 1
	br label %label.entry1
label.entry1:        ;it's an and
	%2 = icmp eq i1 %1, 1
	br i1 %2, label %label.transition1, label %label.end1
label.transition1:       ;transition of an and
	%3 = add i1 0, 0
	%4 = icmp eq i1 %3, 1
	br label %label.end1
label.end1:      ; it's the end of an and
	%5 = phi i1 [ 0, %label.entry1 ], [ %4, %label.transition1 ]
	br label %label.entry2
label.entry2:        ;it's an and
	%6 = icmp eq i1 %5, 1
	br i1 %6, label %label.transition2, label %label.end2
label.transition2:       ;transition of an and
	%7 = add i1 0, 1
	%8 = icmp eq i1 %7, 1
	br label %label.end2
label.end2:      ; it's the end of an and
	%9 = phi i1 [ 0, %label.entry2 ], [ %8, %label.transition2 ]
	br label %label.entry3
label.entry3:        ;it's an and
	%10 = icmp eq i1 %9, 1
	br i1 %10, label %label.transition3, label %label.end3
label.transition3:       ;transition of an and
	%11 = add i1 0, 1
	%12 = icmp eq i1 %11, 1
	br label %label.end3
label.end3:      ; it's the end of an and
	%13 = phi i1 [ 0, %label.entry3 ], [ %12, %label.transition3 ]
	br label %label.entry4
label.entry4:        ;it's an and
	%14 = icmp eq i1 %13, 1
	br i1 %14, label %label.transition4, label %label.end4
label.transition4:       ;transition of an and
	%15 = add i1 0, 0
	%16 = icmp eq i1 %15, 1
	br label %label.end4
label.end4:      ; it's the end of an and
	%17 = phi i1 [ 0, %label.entry4 ], [ %16, %label.transition4 ]
	br label %label.entry.if1
label.entry.if1:       ;it's if 
	%18 = icmp eq i1 %17, 1
	br i1 %18, label %label.then1, label %label.else1
label.then1:       ;it's if 
	%19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.global.strlit.1, i32 0, i32 0))
br label %label.finished.if1
label.else1:       ;it's else 
br label %label.finished.if1
label.finished.if1:
	ret void
}

@.global.strlit.1 = private unnamed_addr constant [5 x i8] c"LUL\0A\00", align 1
