/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUUserListTableManager : NSObject <HMHomeDelegatePrivate, HUAddUserViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    void * _addressBook;
    BOOL  _allowsEditing;
    <HUUserListManagerTableDelegate> * _delegate;
    BOOL  _editing;
    HMHome * _home;
    NSArray * _invitations;
    NSIndexPath * _selectedIndexPath;
    UITableView * _tableView;
    NSArray * _users;
    UIViewController * _viewController;
}

@property (nonatomic) void*addressBook;
@property (nonatomic) BOOL allowsEditing;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUUserListManagerTableDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editing;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSArray *invitations;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) NSArray *users;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_configurePersonViewController:(id)arg1 invitation:(id)arg2;
- (void*)_copyPersonForUser:(id)arg1;
- (void)_didAddUser:(id)arg1;
- (void)_didInsertAtIndex:(unsigned int)arg1;
- (void)_didReloadAtIndex:(unsigned int)arg1;
- (void)_didRemoveAtIndex:(unsigned int)arg1;
- (void)_didRemoveInvitation:(id)arg1;
- (void)_didRemoveUser:(id)arg1;
- (id)_displayNameForUser:(id)arg1;
- (BOOL)_indexPathIsInviteUser:(id)arg1;
- (id)_monogramForUser:(id)arg1;
- (id)_personViewControllerForUser:(id)arg1 invitation:(id)arg2;
- (void)_reinvite;
- (void)_removeInvitation:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeUser:(id)arg1 completion:(id /* block */)arg2;
- (void)_stopSharing;
- (void)_stopSharingWithCompletion:(id /* block */)arg1;
- (id)_stringForInvitationState:(int)arg1;
- (void*)addressBook;
- (BOOL)allowsEditing;
- (void)controllerDidDismissWithError:(id)arg1;
- (void)controllerDidSendInvitations:(id)arg1;
- (id)delegate;
- (BOOL)editing;
- (id)home;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
- (id)initWithTableView:(id)arg1 viewController:(id)arg2;
- (id)invitations;
- (int)numberOfDataRows;
- (int)sectionForPeople;
- (id)selectedIndexPath;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setHome:(id)arg1;
- (void)setInvitations:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setUsers:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)sortedInvitations;
- (id)sortedUsers;
- (id)tableView;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)updateEditingRows;
- (id)users;
- (id)viewController;

@end
