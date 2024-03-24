extern "C"
{
    #include "Lua/include/lua.h"
    #include "Lua/include/lauxlib.h"
    #include "Lua/include/lualib.h"
}
#pragma comment(lib,"Lua/lua54.lib")

int main() {

    lua_State* luaState = luaL_newstate();
    luaL_openlibs(luaState);

    // Run a Lua script stored in a string
    const char* luaCode = "print('Hello, Lua!')";
    luaL_dostring(luaState, luaCode);

    // Close the Lua interpreter
    lua_close(luaState);

    return 0;
}