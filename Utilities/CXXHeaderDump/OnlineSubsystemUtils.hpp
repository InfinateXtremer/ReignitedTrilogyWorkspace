#ifndef UE4SS_SDK_OnlineSubsystemUtils_HPP
#define UE4SS_SDK_OnlineSubsystemUtils_HPP

#include "OnlineSubsystemUtils_enums.hpp"

struct FBlueprintSessionResult
{
}; // Size: 0xB8

struct FPIELoginSettingsInternal
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FString Token;                                                                    // 0x0010 (size: 0x10)
    FString Type;                                                                     // 0x0020 (size: 0x10)
    TArray<uint8> TokenBytes;                                                         // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FPartyReservation
{
    int32 TeamNum;                                                                    // 0x0000 (size: 0x4)
    FUniqueNetIdRepl PartyLeader;                                                     // 0x0008 (size: 0x18)
    TArray<FPlayerReservation> PartyMembers;                                          // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FPlayerReservation
{
    FUniqueNetIdRepl UniqueId;                                                        // 0x0000 (size: 0x18)
    FString ValidationStr;                                                            // 0x0018 (size: 0x10)
    float ElapsedTime;                                                                // 0x0028 (size: 0x4)

}; // Size: 0x30

class AOnlineBeacon : public AActor
{
    float BeaconConnectionInitialTimeout;                                             // 0x0320 (size: 0x4)
    float BeaconConnectionTimeout;                                                    // 0x0324 (size: 0x4)
    class UNetDriver* NetDriver;                                                      // 0x0328 (size: 0x8)

}; // Size: 0x340

class AOnlineBeaconClient : public AOnlineBeacon
{
    class AOnlineBeaconHostObject* BeaconOwner;                                       // 0x0340 (size: 0x8)
    class UNetConnection* BeaconConnection;                                           // 0x0348 (size: 0x8)
    EBeaconConnectionState ConnectionState;                                           // 0x0350 (size: 0x1)

    void ClientOnConnected();
}; // Size: 0x3D0

class AOnlineBeaconHost : public AOnlineBeacon
{
    int32 ListenPort;                                                                 // 0x0340 (size: 0x4)
    TArray<class AOnlineBeaconClient*> ClientActors;                                  // 0x0348 (size: 0x10)

}; // Size: 0x3F8

class AOnlineBeaconHostObject : public AActor
{
    FString BeaconTypeName;                                                           // 0x0318 (size: 0x10)
    TSubclassOf<class AOnlineBeaconClient> ClientBeaconActorClass;                    // 0x0328 (size: 0x8)
    TArray<class AOnlineBeaconClient*> ClientActors;                                  // 0x0330 (size: 0x10)

}; // Size: 0x340

class APartyBeaconClient : public AOnlineBeaconClient
{
    FString DestSessionId;                                                            // 0x0490 (size: 0x10)
    FPartyReservation PendingReservation;                                             // 0x04A0 (size: 0x30)
    EClientRequestType RequestType;                                                   // 0x04D0 (size: 0x1)
    bool bPendingReservationSent;                                                     // 0x04D1 (size: 0x1)
    bool bCancelReservation;                                                          // 0x04D2 (size: 0x1)

    void ServerUpdateReservationRequest(FString SessionId, const FPartyReservation& ReservationUpdate);
    void ServerReservationRequest(FString SessionId, const FPartyReservation& Reservation);
    void ServerCancelReservationRequest(const FUniqueNetIdRepl& PartyLeader);
    void ClientSendReservationUpdates(int32 NumRemainingReservations);
    void ClientSendReservationFull();
    void ClientReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
}; // Size: 0x500

class APartyBeaconHost : public AOnlineBeaconHostObject
{
    class UPartyBeaconState* State;                                                   // 0x0340 (size: 0x8)
    bool bLogoutOnSessionTimeout;                                                     // 0x0490 (size: 0x1)
    float SessionTimeoutSecs;                                                         // 0x0494 (size: 0x4)
    float TravelSessionTimeoutSecs;                                                   // 0x0498 (size: 0x4)

}; // Size: 0x4A0

class ATestBeaconClient : public AOnlineBeaconClient
{

    void ServerPong();
    void ClientPing();
}; // Size: 0x3D0

class ATestBeaconHost : public AOnlineBeaconHostObject
{
}; // Size: 0x340

class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, int32 AchievementContextIndex, bool& bFoundID, float& Progress);
    void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, int32 AchievementContextIndex, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden);
}; // Size: 0x28

class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FAchievementQueryCallbackProxyOnSuccess OnSuccess;                                // 0x0028 (size: 0x10)
    FAchievementQueryCallbackProxyOnFailure OnFailure;                                // 0x0038 (size: 0x10)

    class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 AchievementContextIndex);
    class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 AchievementContextIndex);
}; // Size: 0x68

class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FAchievementWriteCallbackProxyOnSuccess OnSuccess;                                // 0x0028 (size: 0x10)
    FAchievementWriteCallbackProxyOnFailure OnFailure;                                // 0x0038 (size: 0x10)

    class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementName, float Progress, int32 AchievementContextIndex, int32 UserTag);
}; // Size: 0x80

class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FConnectionCallbackProxyOnSuccess OnSuccess;                                      // 0x0028 (size: 0x10)
    FConnectionCallbackProxyOnFailure OnFailure;                                      // 0x0038 (size: 0x10)

    class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
}; // Size: 0xA0

class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FCreateSessionCallbackProxyOnSuccess OnSuccess;                                   // 0x0028 (size: 0x10)
    FCreateSessionCallbackProxyOnFailure OnFailure;                                   // 0x0038 (size: 0x10)

    class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN);
}; // Size: 0xF0

class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FDestroySessionCallbackProxyOnSuccess OnSuccess;                                  // 0x0028 (size: 0x10)
    FDestroySessionCallbackProxyOnFailure OnFailure;                                  // 0x0038 (size: 0x10)

    class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
}; // Size: 0xA0

class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FEndMatchCallbackProxyOnSuccess OnSuccess;                                        // 0x0028 (size: 0x10)
    FEndMatchCallbackProxyOnFailure OnFailure;                                        // 0x0038 (size: 0x10)

    class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome::Type> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome::Type> OtherPlayersOutcome);
}; // Size: 0x78

class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FEndTurnCallbackProxyOnSuccess OnSuccess;                                         // 0x0028 (size: 0x10)
    FEndTurnCallbackProxyOnFailure OnFailure;                                         // 0x0038 (size: 0x10)

    class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TScriptInterface<class ITurnBasedMatchInterface> TurnBasedMatchInterface);
}; // Size: 0x70

class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FFindSessionsCallbackProxyOnSuccess OnSuccess;                                    // 0x0028 (size: 0x10)
    FFindSessionsCallbackProxyOnFailure OnFailure;                                    // 0x0038 (size: 0x10)

    FString GetServerName(const FBlueprintSessionResult& Result);
    int32 GetPingInMs(const FBlueprintSessionResult& Result);
    int32 GetMaxPlayers(const FBlueprintSessionResult& Result);
    int32 GetCurrentPlayers(const FBlueprintSessionResult& Result);
    class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
}; // Size: 0xC0

class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FFindTurnBasedMatchCallbackProxyOnSuccess OnSuccess;                              // 0x0028 (size: 0x10)
    FFindTurnBasedMatchCallbackProxyOnFailure OnFailure;                              // 0x0038 (size: 0x10)

    class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<class ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches);
}; // Size: 0x80

class UInAppPurchaseCallbackProxy : public UObject
{
    FInAppPurchaseCallbackProxyOnSuccess OnSuccess;                                   // 0x0028 (size: 0x10)
    FInAppPurchaseCallbackProxyOnFailure OnFailure;                                   // 0x0038 (size: 0x10)

    class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const FInAppPurchaseProductRequest& ProductRequest);
}; // Size: 0xC0

class UInAppPurchaseQueryCallbackProxy : public UObject
{
    FInAppPurchaseQueryCallbackProxyOnSuccess OnSuccess;                              // 0x0028 (size: 0x10)
    FInAppPurchaseQueryCallbackProxyOnFailure OnFailure;                              // 0x0038 (size: 0x10)

    class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);
}; // Size: 0xD0

class UInAppPurchaseRestoreCallbackProxy : public UObject
{
    FInAppPurchaseRestoreCallbackProxyOnSuccess OnSuccess;                            // 0x0028 (size: 0x10)
    FInAppPurchaseRestoreCallbackProxyOnFailure OnFailure;                            // 0x0038 (size: 0x10)

    class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, class APlayerController* PlayerController);
}; // Size: 0xD0

class UIpConnection : public UNetConnection
{
}; // Size: 0x337D0

class UIpNetDriver : public UNetDriver
{
    uint8 LogPortUnreach;                                                             // 0x0508 (size: 0x1)
    uint8 AllowPlayerPortUnreach;                                                     // 0x0508 (size: 0x1)
    uint32 MaxPortCountToTry;                                                         // 0x050C (size: 0x4)
    uint32 ServerDesiredSocketReceiveBufferBytes;                                     // 0x0528 (size: 0x4)
    uint32 ServerDesiredSocketSendBufferBytes;                                        // 0x052C (size: 0x4)
    uint32 ClientDesiredSocketReceiveBufferBytes;                                     // 0x0530 (size: 0x4)
    uint32 ClientDesiredSocketSendBufferBytes;                                        // 0x0534 (size: 0x4)

}; // Size: 0x538

class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FJoinSessionCallbackProxyOnSuccess OnSuccess;                                     // 0x0028 (size: 0x10)
    FJoinSessionCallbackProxyOnFailure OnFailure;                                     // 0x0038 (size: 0x10)

    class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult);
}; // Size: 0x160

class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool WriteLeaderboardInteger(class APlayerController* PlayerController, FName StatName, int32 StatValue);
}; // Size: 0x28

class ULeaderboardFlushCallbackProxy : public UObject
{
    FLeaderboardFlushCallbackProxyOnSuccess OnSuccess;                                // 0x0028 (size: 0x10)
    FLeaderboardFlushCallbackProxyOnFailure OnFailure;                                // 0x0038 (size: 0x10)

    class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, FName SessionName);
}; // Size: 0xA0

class ULeaderboardQueryCallbackProxy : public UObject
{
    FLeaderboardQueryCallbackProxyOnSuccess OnSuccess;                                // 0x0028 (size: 0x10)
    FLeaderboardQueryCallbackProxyOnFailure OnFailure;                                // 0x0038 (size: 0x10)

    class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, FName StatName);
}; // Size: 0xD0

class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
    FLogoutCallbackProxyOnSuccess OnSuccess;                                          // 0x0028 (size: 0x10)
    FLogoutCallbackProxyOnFailure OnFailure;                                          // 0x0038 (size: 0x10)

    class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
}; // Size: 0x60

class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
    FName VoiceSubsystemNameOverride;                                                 // 0x0028 (size: 0x8)

}; // Size: 0x130

class UOnlinePIESettings : public UDeveloperSettings
{
    bool bOnlinePIEEnabled;                                                           // 0x0038 (size: 0x1)
    TArray<FPIELoginSettingsInternal> Logins;                                         // 0x0040 (size: 0x10)

}; // Size: 0x50

class UOnlineSessionClient : public UOnlineSession
{
    bool bIsFromInvite;                                                               // 0x02B0 (size: 0x1)
    bool bHandlingDisconnect;                                                         // 0x02B1 (size: 0x1)

}; // Size: 0x2C0

class UPartyBeaconState : public UObject
{
    FName SessionName;                                                                // 0x0028 (size: 0x8)
    int32 NumConsumedReservations;                                                    // 0x0030 (size: 0x4)
    int32 MaxReservations;                                                            // 0x0034 (size: 0x4)
    int32 NumTeams;                                                                   // 0x0038 (size: 0x4)
    int32 NumPlayersPerTeam;                                                          // 0x003C (size: 0x4)
    FName TeamAssignmentMethod;                                                       // 0x0040 (size: 0x8)
    int32 ReservedHostTeamNum;                                                        // 0x0048 (size: 0x4)
    int32 ForceTeamNum;                                                               // 0x004C (size: 0x4)
    TArray<FPartyReservation> Reservations;                                           // 0x0050 (size: 0x10)

}; // Size: 0x70

class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FQuitMatchCallbackProxyOnSuccess OnSuccess;                                       // 0x0028 (size: 0x10)
    FQuitMatchCallbackProxyOnFailure OnFailure;                                       // 0x0038 (size: 0x10)

    class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome::Type> Outcome, int32 TurnTimeoutInSeconds);
}; // Size: 0x70

class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
    FShowLoginUICallbackProxyOnSuccess OnSuccess;                                     // 0x0028 (size: 0x10)
    FShowLoginUICallbackProxyOnFailure OnFailure;                                     // 0x0038 (size: 0x10)

    class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
}; // Size: 0x58

class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
    void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32 PlayerIndex, FString& PlayerDisplayName);
    void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32& PlayerIndex);
    void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn);
}; // Size: 0x28

class UVoipListenerSynthComponent : public USynthComponent
{

    bool IsIdling();
}; // Size: 0x6D0

#endif
