
#include <lua.h>

#ifdef __cplusplus
extern "C" {
#endif

LUALIB_API int luaopen_cjson(lua_State *l);
LUALIB_API int luaopen_cjson_safe(lua_State *l);

#ifdef __cplusplus
}
#endif