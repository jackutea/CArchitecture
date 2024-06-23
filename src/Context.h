#ifndef CONTEXT_H__
#define CONTEXT_H__

#include "E_Role.h"
#include "Repo_Role.h"

typedef struct Context {
    // 仓库
    Repo_Role *repo_role;
} Context;

// 创建
Context* Context_Create();

// 释放
void Context_Free(Context* context);

#endif