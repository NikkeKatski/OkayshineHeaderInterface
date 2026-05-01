#pragma once

#include "J3D/J3DModel.hxx"

class SDLDrawBufToken {
};

class SDLModelData {
    SDLModelData(J3DModelData *data);

    void entryNode(J3DNode *node, SDLDrawBufToken *token);
    void entrySameMat(J3DMaterial *material, SDLDrawBufToken *token);
    void entrySDLModels();
    void recursiveEntry(J3DNode *node, SDLDrawBufToken *token);
};

class SDLModel : public J3DModel {
public:
    SDLModel(SDLModelData *data, u32 flags, u32 unkCount);
    virtual ~SDLModel();

    void entry();
    void entryModelDataSDL(SDLModelData *data, u32 flags, u32 unkCount);
    void viewCalcSimple();

    SDLModelData *mSDLData;
    u32 _A4;
    u32 _A8;  // Flags?
};
