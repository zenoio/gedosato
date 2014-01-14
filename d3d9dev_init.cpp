// Separate file to facilitate code reuse of
// d3ddev.cpp in d3ddev_ex.cpp

#include "d3d9dev.h"

#include "RenderstateManager.h"

hkIDirect3DDevice9::hkIDirect3DDevice9(IDirect3DDevice9 **ppReturnedDeviceInterface, D3DPRESENT_PARAMETERS *pPresentParam, IDirect3D9 *pIDirect3D9) {
	m_pD3Ddev = *ppReturnedDeviceInterface;
	*ppReturnedDeviceInterface = this;
	m_pD3Dint = pIDirect3D9;
	rsMan = new RSManager();
	rsMan->setD3DDevice(m_pD3Ddev);
	RSManager::setLatest(rsMan);
}
