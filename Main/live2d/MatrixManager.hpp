#pragma once

#include <CubismFramework.hpp>
#include <Math/CubismViewMatrix.hpp>
#include <LAppModel.hpp>

class MatrixManager
{
public:
    void Initialize();
    void UpdateScreenToScene(int ww, int wh);
    void ScreenToScene(float *x, float *y);
    Csm::CubismMatrix44 &GetProjection(LAppModel *model, int ww, int wh);
    void SetOffset(float x, float y);
    void SetScale(float scale);
private:
    Csm::CubismMatrix44 _screenToScene;
    Csm::CubismMatrix44 _projection;
    float _offsetX;
    float _offsetY;
    float _scale;
};