/*
 * Copyright (C) 2020-2025 ASHINi corp. 
 * 
 * This library is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU Lesser General Public 
 * License as published by the Free Software Foundation; either 
 * version 2.1 of the License, or (at your option) any later version. 
 * 
 * This library is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
 * Lesser General Public License for more details. 
 * 
 * You should have received a copy of the GNU Lesser General Public 
 * License along with this library; if not, write to the Free Software 
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA 
 * 
 */

//---------------------------------------------------------------------------

#ifndef ManagePoFaOpPkgH
#define ManagePoFaOpPkgH
//---------------------------------------------------------------------------

class CManagePoFaOpPkg : public CManagePoBase<DB_PO_FA_OP_PKG>
{
public:
	INT32					LoadDBMS();

public:
	INT32					InitPkg();
	INT32					GetHash(UINT32 nID, String& strOrgValue);

public:
	INT32					AddPoFaOpPkg(DB_PO_FA_OP_PKG&	dpfpp);
    INT32					EditPoFaOpPkg(DB_PO_FA_OP_PKG&	dpfpp);
    INT32					DelPoFaOpPkg(UINT32 nID);

public:
	INT32					ClearItemByPolicyID(UINT32 nPolicyID);
	INT32					ClearPkgUnitByPolicyID(UINT32 nPolicyID);

public:
	String					GetName(UINT32 nID);    

public:
	INT32					SetPkt(MemToken& SendToken);
	INT32					SetPkt(UINT32 nID, MemToken& SendToken);
	INT32					SetPkt(PDB_PO_FA_OP_PKG pdpfpp, MemToken& SendToken);
	INT32					GetPkt(MemToken& RecvToken, DB_PO_FA_OP_PKG& dpfpp);

public:
	INT32					SetPktHost(UINT32 nID, MemToken& SendToken);
	INT32					SetInotifyPkg(UINT32 nPkgID);

public:
	CManagePoFaOpPkg();
    ~CManagePoFaOpPkg();

};

extern CManagePoFaOpPkg*	t_ManagePoFaOpPkg;

#endif
