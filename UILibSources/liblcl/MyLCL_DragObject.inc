
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function DragObject_Create(AOwner: TControl): TDragObject; extdecl;
begin
  Result :=  TDragObject.Create(AOwner);
end;

procedure DragObject_Free(AObj: TDragObject); extdecl;
begin
  AObj.Free;
end;

procedure DragObject_HideDragImage(AObj: TDragObject); extdecl;
begin
  AObj.HideDragImage;
end;

procedure DragObject_ShowDragImage(AObj: TDragObject); extdecl;
begin
  AObj.ShowDragImage;
end;

function DragObject_ClassName(AObj: TDragObject): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function DragObject_Equals(AObj: TDragObject; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function DragObject_GetHashCode(AObj: TDragObject): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function DragObject_ToString(AObj: TDragObject): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function DragObject_GetAlwaysShowDragImages(AObj: TDragObject): LongBool; extdecl;
begin
  Result :=  AObj.AlwaysShowDragImages;
end;

procedure DragObject_SetAlwaysShowDragImages(AObj: TDragObject; AValue: LongBool); extdecl;
begin
  AObj.AlwaysShowDragImages := AValue;
end;

procedure DragObject_GetDragPos(AObj: TDragObject; var Result: TPoint); extdecl;
begin
  Result :=  AObj.DragPos;
end;

procedure DragObject_SetDragPos(AObj: TDragObject; var AValue: TPoint); extdecl;
begin
  AObj.DragPos := AValue;
end;

procedure DragObject_GetDragTargetPos(AObj: TDragObject; var Result: TPoint); extdecl;
begin
  Result :=  AObj.DragTargetPos;
end;

procedure DragObject_SetDragTargetPos(AObj: TDragObject; var AValue: TPoint); extdecl;
begin
  AObj.DragTargetPos := AValue;
end;

function DragObject_GetDropped(AObj: TDragObject): LongBool; extdecl;
begin
  Result :=  AObj.Dropped;
end;


exports
  DragObject_Create,
  DragObject_Free,
  DragObject_HideDragImage,
  DragObject_ShowDragImage,
  DragObject_ClassName,
  DragObject_Equals,
  DragObject_GetHashCode,
  DragObject_ToString,
  DragObject_GetAlwaysShowDragImages,
  DragObject_SetAlwaysShowDragImages,
  DragObject_GetDragPos,
  DragObject_SetDragPos,
  DragObject_GetDragTargetPos,
  DragObject_SetDragTargetPos,
  DragObject_GetDropped;
