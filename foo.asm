.686p
.XMM
.model FLAT, C


.code
    foo PROC
        push ebp
        mov ebp, esp
        mov eax, [ebp+8]
        mov ecx, [ebp+12]
        shl eax, cl
        pop ebp
        ret
    foo ENDP
end
