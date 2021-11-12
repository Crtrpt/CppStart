.686p
.XMM
.model FLAT, C


.code
    foo PROC
        push ebp
        mov ebp, esp
        mov eax, [ebp+8] ; Get first argument
        mov ecx, [ebp+12] ; Get second argument
        shl eax, cl     ; EAX = EAX * ( 2 ^ CL )
        pop ebp         ; Restore EBP
        ret             ; Return with sum in EAX
    foo ENDP
end
