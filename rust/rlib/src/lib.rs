#[no_mangle]
pub unsafe extern "C" fn addition(a:u32,b:u32)->u32{
    return a+b;
}